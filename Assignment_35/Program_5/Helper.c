///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ToggleBitRange
// Parameters    : Integer , Integer , Integer
// Return Value  : Integer
// Description   : It takes one integer and range as input and toggle all the bits in that range 
// Author        : Swapnil Ramesh Adhav
// Date          : 6th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

UINT ToggleBitRange(UINT iValue,int iLow,int iUp)
{
    int iDiff = 0,iCnt = 0,iPos = 0;
    int *iMask;
    int iMask1 = 0X00000001;
    int iMask2 = 0;
    UINT iResult = 0;

    if((iLow<0) || (iUp>32))
    {
        return -1;
    }
    if(iUp>iLow)
    {
        iDiff = iUp - iLow;
        iPos = iLow;
    }
    else
    {
        iDiff = iLow - iUp;
        iPos = iUp;
    }
    iDiff++;

    iMask = (int *)malloc(sizeof(int) * iDiff);

    for(iCnt=0;iCnt<iDiff;iCnt++,iLow++)
    {
        iMask1 = 0X00000001;
        iMask[iCnt] = iMask1 << iLow - 1; 
        iMask2 = iMask2 | iMask[iCnt];
    }
        
    iResult = iValue ^ iMask2;
 
    return iResult; 
}