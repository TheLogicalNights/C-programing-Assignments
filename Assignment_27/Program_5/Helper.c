///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayReverse
// Parameters    : String
// Return Value  : None
// Description   : it takes one string as input and display it in reverse order
// Author        : Swapnil Ramesh Adhav 
// Date          : 22th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void DisplayReverse(char *cString)
{
    char *cTemp = cString;
    char ch = *cString;
    for(;*cTemp!='\0';*cTemp++);
    while(*cTemp!=*cString)
    {
        printf("%c",*cTemp);
        *cTemp--;
    }
    printf("%c\n",ch);
}