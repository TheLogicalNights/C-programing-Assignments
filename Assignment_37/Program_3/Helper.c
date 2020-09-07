///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrWrdRev
// Parameters    : String
// Return Value  : NONE
// Description   : it takes one string as input and reverse each word in place.
// Author        : Swapnil Ramesh Adhav
// Date          : 7th Spet 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void StrWrdRev(char *Str)
{
    int iSpace = 1;
    char *First,*Last,Temp='\0';
    
    First=Last=Str;

    if(Str==NULL)
    {
        return ;
    }

    while(*Str != '\0')                
    {   
        First = Last = Str;

        while((*Str != ' ') && (*Str !='\0'))
        {
            Last++;
            Str++;
        }
        Last--;
        
        iSpace = 1;
        
        while(First<=Last)
        {
            Temp = *First;
            *First = *Last;
            *Last = Temp;
            First++;
            Last--;
        }
        Str++;
    }
}