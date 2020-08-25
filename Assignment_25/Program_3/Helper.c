///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkDigit
// Parameters    : Char
// Return Value  : BOOLEAN
// Description   : it take one character as input and check whether it is digit or not
// Author        : Swapnil Ramesh Adhav
// Date          : 21th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkDigit(char cDigit)
{
    if(cDigit>=48 && cDigit<=57)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}