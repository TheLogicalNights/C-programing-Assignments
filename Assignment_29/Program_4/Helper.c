///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : LastChar
// Parameters    : String,Character
// Return Value  : Integer
// Description   : it takes string and character as input and return the index of last occurence of that character from the string
// Aurhor        : Swapnil Ramesh Adhav
// Date          : 25th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int LastChar(char *str,char ch)
{
    int iLength = 0;
    if(str==NULL)
    {
        return -2;
    }
    while(*str!='\0')
    {
        iLength++;
        str++;
    }
    while(iLength>=0)
    {
        if(*str==ch)
        {
            break;
        }
        iLength--;
        str--;
    }
    if(iLength==-1)
    {
        return -1;
    }
    else
    {
        return iLength;
    }
}