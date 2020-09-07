///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrCap
// Parameters    : String
// Return Value  : None
// Description   : it takes a string as input and replace first letter of each word of string into capital letter
// Author        : Swapnil Ramesh Adhav
// Date          : 8th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void StrCap(char *Str)
{
    int iIndex = 1;
    if(Str==NULL)
    {
        return ;
    }
    while(*Str != '\0')
    {
        if(((*Str==' ') || (*Str=='\t')) && (iIndex==0))
        {
            Str++;
            iIndex = 1;            
        }
        if((*Str>='a') && (*Str<='z') && (iIndex==1))
        {
            *Str = *Str - 32;
            iIndex = 0;
        }
        else if((*Str>='A') && (*Str<='Z') && (iIndex==1))
        {
            iIndex = 0;
        }
        Str++;
    }
}