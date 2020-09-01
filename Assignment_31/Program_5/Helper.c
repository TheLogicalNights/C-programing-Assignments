///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrCpyToggle
// Parameters    : String , String
// Return Value  : None
// Description   : it takes two strings as user and copy one string into another string by toggling the case
// Author        : Swapnil Ramesh Adhav
// Date          : 1st Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void StrCpyToggle(char *Src,char *Dest)
{
    if((Src==NULL) || (Dest==NULL))
    {
        return;
    }
    while(*Src != '\0')
    {
        if((*Src>='a') && (*Src<='z'))
        {
            *Src = *Src - 32;
        }
        else if((*Src>='A') && (*Src<='Z'))
        {
            *Src = *Src + 32;
        }

        *Dest = *Src;
        Dest++;
        Src++;
    }
    *Dest = '\0';
}