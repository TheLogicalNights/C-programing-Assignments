///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FirstChar
// Parameters    : String, Character 
// Return Value  : Integer
// Description   : it takes String and character as input and return the index of first occurence of that character from string
// Author        : Swapnil Ramesh Adhav
// Date          : 25th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int FirstChar(char *str,char ch)
{
    int iIndex = 0;
    
    if(str==NULL)
    {
        return -2;
    }
    while(*str!='\0')
    {
        if(*str==ch)
        {
            break;
        }
        iIndex++;
        str++;
    }
    if(*str=='\0')
    {
         return -1;
    }
    else
    {
         return iIndex;
    }
}