///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrCpyXX
// Parameters    : String , String
// Return Value  : None
// Description   : it takes two strings as input and copy one string in another string without white spaces
// Author        : Swapnil Ramesh Adhav
// Date          : 1st Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void StrCpyXX(char *Src,char *Dest)
{
    if((Src==NULL) || (Dest==NULL))
    {
        return;
    }
    while(*Src != '\0')
    {
        if(*Src == ' ')
        {
            Src++;
        }
        else
        {
            *Dest = *Src;
            Src++;
            Dest++;
        }
    }
    *Dest = '\0';
}