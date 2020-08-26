///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : strlwrx
// Parameters    : String
// Return Value  : None
// Description   : it takes one string as input and convert into lower case
// Author        : Swapnil Ramesh Adhav
// Date          : 22th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void strlwrx(char *cString)
{
    if(cString==NULL)
    {
        return;
    }
    while(*cString!='\0')
    {
        if(*cString>=65 && *cString<=90)
        {
            *cString = *cString+32;
        }
        *cString++;
    }
}