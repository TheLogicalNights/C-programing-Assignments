///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : WordCount
// Parameters    : String
// Return Value  : None
// Description   : It takes one string as input and return the word count from that string
// Author        : Swapnil Ramesh Adhav
// Date          : 7th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int WordCount(char *Str)
{
    int iWord = 0;
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
        }
        else
        {
            iSpace=0;
        }
        if(((*Str == ' ') || (*Str=='\t')) && (iSpace==0))
        {
            iWord++;
            iSpace = 1;
        }
        Str++;
    }
    if((*Str == '\0'))
    {
            iWord++;
    }

    return iWord;
}