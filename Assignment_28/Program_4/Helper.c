///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayDigit
// Parameters    : String
// Return Value  : None
// Description   : it takes string as input and display digits from it
// Author        : Swapnil Ramesh Adhav 
// Date          : 22th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void DisplayDigit(char *cString)
{
    if(cString==NULL)
    {
        return;
    }
    while(*cString!='\0')
    {
        if((*cString>=48) && (*cString<=57))
        {
            printf("%c\t",*cString);
        }
        *cString++;
    }
    printf("\n");
}