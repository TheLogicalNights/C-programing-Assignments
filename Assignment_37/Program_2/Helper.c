///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : WordCount
// Parameters    : String
// Return Value  : Integer
// Description   : It takes a String as input and return the length of largest word from the string
// Author        : Swapnil Ramesh Adhav 
// Date          : 7th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int WordCount(char *Str)
{
    int iMax = 0;
    int iLetter = 0;
    int iSpace = 1;
    if(Str==NULL)
    {
        return -1;
    }
    while(*Str != '\0')
    {
        if((iSpace==1) && ((*Str==' ') || (*Str=='\t')))
        {
            Str++;
            iLetter = 0;
        }
        else
        {
            iSpace=0;
        }
        if((((*Str>='a') && (*Str<='z')) || ((*Str>='A') && (*Str<='Z')) || (iSpace == 0)))
        {
            iLetter++;
            iSpace = 1;
        }
        if(iLetter>iMax)
        {
            iMax = iLetter;
        }
        Str++;
    }

    return iMax;
}