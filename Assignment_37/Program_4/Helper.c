///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrCpyX
// Parameters    : String,String
// Return Value  : None 
// Description   : it takes two strings as input and copy one string into another string by removing excess spaces
// Author        : Swapnil Ramesh Adhav
// Date          : 7th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void StrCpyX(char *Src,char *Dest)
{
    int iSpace = 2;

    if((Src==NULL) || (Dest==NULL))
    {
        return ;
    }
    while(*Src != '\0')
    {
        
        if((iSpace>1) && ((*Src==' ') || (*Src=='\t')))
        {
            while(((*Src==' ') || (*Src=='\t')))
            {
                Src++;
            }
        }
        else
        {
            iSpace = 0;
        }
        if((iSpace==0) && ((*Src==' ') || (*Src=='\t')))
        {
            *Dest = *Src;
            iSpace = 2;
        }
        else if((*Src != ' ') || (*Src != '\t'))
        {
            *Dest = *Src;
        }
        Src++;
        Dest++;
    }
    *Dest = '\0';
}