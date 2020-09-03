///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : OffBit
// Parameters    : Unsigned Integer
// Return Value  : Unsigned Integer
// Description   : It takes one integer as input and if its 7th bit is ON turn it OFF and return the modified value
// Author        : Swapnil Ramesh Adhav
// Date          : 3rd Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

UINT OffBit(UINT iValue)
{
    int iMask = 0X00000040;
    int iResult = 0;

    iResult = iValue & iMask;

    if(iResult==iMask)
    {
        iResult = iValue ^ iResult;
        return iResult;
    }
    else
    {
        return iValue;
    }
}