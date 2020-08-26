///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : strtogglex
// Parameters    : String
// Return Value  : None
// Descritpion   : it takes string as input and toggles the case of string
// Author        : Swapnil Rmaesh Adhav
// Date          : 22th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void strtogglex(char *cString)
{
    if(cString==NULL)
    {
        return;
    }
    while(*cString!='\0')
    {
        if((*cString>=65) && (*cString<=90))
        {
            *cString = *cString+32;
        }
        else if((*cString>=97) && (*cString<=122))
        {
            *cString = *cString-32;
        }
        *cString++;
    }
}