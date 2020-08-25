///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkSpecial
// Parameters    : Char
// Return Value  : BOOLEAN
// Description   : it take one character as input and check whether it is special character or not
// Author        : Swapnil Ramesh Adhav
// Date          : 21th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkSpecial(char ch)
{
    if(((ch>=65) && (ch<=90)) || ((ch>=97) && (ch<=122)) || ((ch>=48) && (ch<=57)))
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}