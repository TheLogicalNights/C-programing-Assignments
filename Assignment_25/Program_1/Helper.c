///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkAlpha
// Parameters    : Char
// Return Value  : BOOLEAN
// Description   : it takes one character as input and check whether it is alphabet or not
// Author        : Swapnil Ramesh Adhav
// Date          : 21th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkAlpha(char cAlpha)
{
    if((cAlpha>=65) && (cAlpha<=90) || (cAlpha>=97) && (cAlpha<=122))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}