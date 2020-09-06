///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkBit
// Parameters    : Integer,Integer,Integer
// Return Value  : BOOLEAN
// Description   : It takes one integer and two bit positions as input and check whether that bits are ON or OFF
// Author        : Swapnil Ramesh Adhav
// Date          : 6th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkBit(UINT iValue,int iPos1,int iPos2)
{
    int iMask1 = 0X00000001;
    int iMask2 = 0X00000001;
    int iMask3 = 0;
    int iMask4 = 0X00000001;
    int iResult = 0;
    int iPos = 0;
    int iCnt = 0;
    if(iPos1<iPos2)
    {
        iPos = iPos1;
    }
    else
    {
        iPos = iPos2;
    }
    if((iPos1<1)) 
    {
        iPos = iPos2;
    }
    if((iPos2<1)) 
    {
        iPos = iPos1;
    }
    if((iPos1>32)) 
    {
        iPos = iPos2;
    }
    if(iPos2>32)
    {
        iPos = iPos1;
    }
    if((iPos1<1) && (iPos1>32))
    {
        return FALSE;
    }
    if((iPos2<1) && (iPos2>32))
    {
        return FALSE;
    }

    iMask1 = iMask1 << iPos1 - 1;
    iMask2 = iMask2 << iPos2 - 1;
    iMask3 = iMask1 | iMask2;

    iResult = iValue & iMask3;
    iResult = iResult >> iPos-1;

    while(iResult != 0)
    {
        if((iResult & iMask4)==1)
        {
            iCnt++;
            break;
        }

        iResult = iResult >> 1;
    }
    if(iCnt>=1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}