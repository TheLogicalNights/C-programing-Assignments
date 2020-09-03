///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : OnBit
// Parameters    : Unsigned Integer
// Return Value  : Unsigned Integer 
// Description   : It takes one integer as input and turn first 4 bits of that number ON
// Author        : Swapnil Ramesh Adhav
// Date          : 3rd Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

UINT OnBit(UINT iValue)
{
    int iMask = 0X0000000F;
    UINT iResult = 0;

    iResult = iValue | iMask;

    return iResult;
}