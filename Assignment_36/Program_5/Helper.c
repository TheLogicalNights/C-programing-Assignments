///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrPallindrome
// Parameters    : String 
// Return Value  : BOOLEAN
// Description   : It takes one string from user and check whether it is pallindrome or not (Case-insensitive)
// Author        : Swapnil Ramesh Adhav
// Date          : 6th Spet 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL StrPallindrome(char *Str)
{
    char *First,*Last; 
    First = Last = Str;
    
    if(Str==NULL)
    {
        return ERROR;
    }
    
    while(*Str != '\0')
    {
        if((*Str>='A') && (*Str<='Z'))
        {
            *Str = *Str + 32;
        }
        Last++;
        Str++;
    }
    Last--;
    
    while(First<=Last)
    {
        if((*First != *Last))
        {
            break;
        }
        First++;
        Last--;
    }
    if(Last<First)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}