///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkCapital
// Parameters    : Char
// Return Value  : BOOLEAN
// Description   : it takes one character as input and check whether it is capital or not
// Author        : Swapnil Ramesh Adhav
// Date          : 21th August 2020 
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkCapital(char cAlpha)
{
    if(cAlpha>=65 && cAlpha<=90)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}