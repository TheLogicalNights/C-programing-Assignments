///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrCpyXXXX
// Parameters    : String , String
// Return Value  : None
// Description   : it takes two strings as input and copy one string into another by converting capital character into small character
// Author        : Swapnil Ramesh Adhav
// Date          : 1st Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void StrCpyXXXX(char *Src,char *Dest)
{
    if((Src==NULL) || (Dest==NULL))
    {
        return;
    }
    while(*Src != '\0')
    {
        if((*Src>='A') && (*Src<='Z'))
        {
            *Src = *Src + 32;
        }
        *Dest = *Src;
        Src++;
        Dest++;
    }
    *Dest = '\0';
}