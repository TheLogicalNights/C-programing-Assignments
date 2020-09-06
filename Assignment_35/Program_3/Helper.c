///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkBit
// Parameters    : Integer
// Return Value  : BOOLEAN
// Description   : It takes one integer as input and check whether 9th or 12th bit is on or off
// Author        : Swapnil Ramesh Adhav
// Date          : 6th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkBit(UINT iValue)
{
    int iMask1 = 0X00000900;
    int iResult = 0,iCnt = 0;
    int iMask2 = 0X00000001;

    iResult = iValue & iMask1;
    iResult = iResult >> 8;

    while(iResult != 0)
    {
        if((iResult & iMask2)==1)
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