///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkBit
// Parameters    : Unsigned Integer
// Return Value  : BOOLEAN
// Description   : It takes one integer as input and check whether it first bit and last bit is ON or OFF
// Author        : Swapnil Ramesh Adhav
// Date          : 3rd Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkBit(UINT iValue)
{
    int iMask = 0X80000001;
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