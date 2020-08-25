///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Parameters    : char
// Return Value  : None
// Description   : it takes one character as input and display its opposite case
// Author        : Swapnil Ramesh Adhav
// Date          : 21th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Display(char cAlpha)
{
    if(cAlpha>=65 && cAlpha<=90)
    {
        printf("%c\n",cAlpha+32);
    }
    else if(cAlpha>=97 && cAlpha<=122)
    {
        printf("%c\n",cAlpha-32);
    }
    else
    {
        printf("%c\n",cAlpha);
    }
}