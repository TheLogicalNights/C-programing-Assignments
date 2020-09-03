///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ToggleBit
// Parameters    : Unsigned Integer
// Return Value  : Unsigned Integer
// Description   : It takes one integer as input and toggles 7th and 10th bit of that number
// Author        : Swapnil Ramesh Adhav
// Date          : 3rd Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

UINT ToggleBit(UINT iVAalue)
{
    int iMask = 0X00000240;
    UINT iResult = 0;

    iResult = iVAalue ^ iMask;

    return iResult;
}