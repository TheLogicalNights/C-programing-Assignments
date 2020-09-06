///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ToggleStrRevX
// Parameters    : String
// Return Value  : None
// Decription    : it takes one string as input and reverse it with toggling the case
// Author        : Swapnil Ramesh Adhav
// Date          : 6th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void ToggleStrRevX(char *Str)
{
    char Temp,*First,*Last;
    First=Last=Str;

    if((Str==NULL) || (First==NULL) || (Last==NULL))
    {
        return ;
    }

    while((*Last != '\0'))
    {
        Last++;
    }
    Last--;

    while((First <= Last))
    {
        if((*First>='a') && (*First<='z'))
        {
            *First = *First - 32;
        }
        else if((*First>='A') && (*First<='Z'))
        {
            *First = *First + 32;
        }
        else if((*Last>='a') && (*Last<='z'))
        {
            *Last = *Last - 32;
        }
        else if((*Last>='A') && (*Last<='Z'))
        {
            *Last = *Last + 32;
        }
        Temp = *First;
        *First = *Last;
        *Last = Temp;
        First++;
        Last--;
    }
}