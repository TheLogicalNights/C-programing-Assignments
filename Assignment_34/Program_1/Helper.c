///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkBit
// Parameters    : Unsigned Integer , Integer
// Return Value  : BOOLEAN
// Description   : It takes number and bit position as integer and check whether that perticular bit of that number is ON or OFF
// Author        : Swapnil Ramesh Adhav
// Date          : 3rd Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkBit(UINT iValue,int iPos)
{
    int iMask = 0X00000001;
    int iResult = 0;

    if((iPos<1) || (iPos>32))
    {
        return ERROR;
    }

    iMask = iMask << (iPos-1);

    iResult = iValue & iMask;

    if(iResult==iMask)
    {
        return ON;
    }
    else
    {
        return OFF;
    }
}