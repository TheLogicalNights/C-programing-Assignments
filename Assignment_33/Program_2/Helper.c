///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : OffBit
// Parameters    : Unsigned Integer
// Return Value  : Unsigned Integer
// Description   : it takes one integer as input and OFF its 7th and 10th bit
// Author        : Swapnil Ramesh Adhav
// Date          : 3rd Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

UINT OffBit(UINT iValue)
{
    int iMask = 0X00000240;
    UINT iResult = 0;

    iResult = iValue ^ iMask;

    return iResult;
}