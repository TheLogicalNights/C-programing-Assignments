///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrCpyXXX
// Parameters    : String , String
// Return Value  : None
// Description   : it takes two string as input and copy one string into another string by converting small characters into capital
// Author        : Swapnil Ramesh Adhav
// Date          : 1st Spet 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void StrCpyXXX(char *Src,char *Dest)
{
    if((Src==NULL) || (Dest==NULL))
    {
        return;
    }
    while(*Src != '\0')
    {
        if((*Src>='a') && (*Src<='z'))
        {
            *Src = *Src-32;
        }
        *Dest = *Src;
        Src++;
        Dest++;
    }
    *Dest = '\0';
}