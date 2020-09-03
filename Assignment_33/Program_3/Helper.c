///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ToggleBit
// Parameters    : Unsigned Integer
// Return Value  : Unsigned Integer
// Description   : it takes one integer as input and toggle 7th bit of that number and return the modified number 
// Author        : Swapnil Ramesh Adhav
// Date          : 3rd Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

UINT ToggleBit(UINT iValue)
{
    int iMask = 0X00000040;
    UINT iResult = 0;

    iResult = iValue ^ iMask;

    return iResult;
}