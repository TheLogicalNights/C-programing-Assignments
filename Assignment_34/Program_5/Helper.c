///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ToggleBit
// Parameters    : Unsigned Integer
// Return Value  : Unsigned Integer 
// Description   : It takes one integer as input and toggles first and last nibble of that nummber
// Author        : Swapnil Ramesh Adhav
// Date          : 3rd Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

UINT ToggleBit(UINT iValue)
{
    int iMask = 0XF000000F;
    UINT iResult = 0;

    iResult = iValue ^ iMask;

    return iResult;
}