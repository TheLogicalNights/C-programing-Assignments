///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkSmall
// Prameters     : Char
// Return Value  : BOOLEAN
// Description   : it take one character as input and check Whether it is in small case or not
// Author        : Swapnil Ramesh Adhav
// Date          : 21th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkSmall(char cSmall)
{
    if(cSmall>=97 && cSmall<=122)
    {
        return TRUE;
    }
    else if(cSmall>=65 && cSmall<=90)
    {
        return FALSE;
    }
    else
    {
        return ERROR;
    }
}