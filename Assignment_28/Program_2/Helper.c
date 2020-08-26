///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : struprx
// Parameters    : String 
// Return Value  : None
// Description   : it takes one string and input and convert it into upper case
// Author        : Swapnil Ramesh Adhav
// Date          : 22th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void struprx(char *cString)
{
    if(cString==NULL)
    {
        return;
    }
    while(*cString!='\0')
    {
        if((*cString>=97) && (*cString<=122))
        {
            *cString = *cString-32;
        }
        *cString++;
    }
}