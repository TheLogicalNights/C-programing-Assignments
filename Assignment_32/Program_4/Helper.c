///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkBit
// Parameters    : Unsigned Integer
// Return Value  : BOOLEAN 
// Description   : it takes one integer as input and check whether its 7th 8th and 9th bit is ON or OFF
// Author        : Swapnil Ramesh Adhav
// Date          : 3rd Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkBit(UINT iValue)
{
    int iMask = 0X000001C0;
    int iResult = 0;

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