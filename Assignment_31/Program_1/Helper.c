///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrRevX
// Parameters    : String , String
// Return Value  : None
// Description   : it takes two Strings as input and copy one string into another string in reverse order
// Author        : Swapnil Ramesh Adhav
// Date          : 1st Spet 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void StrRevX(char *Src,char *Dest)
{
    int iCnt = 0;
    if((Src==NULL) || (Dest==NULL))
    {
        return;
    }
    while(*Src != '\0')
    {
        Src++;
        iCnt++;
    }
    Src--;
    iCnt--;
    while(iCnt>=0)
    {
        *Dest = *Src;
        Src--;
        Dest++;
        iCnt--;
    }
    *Dest = '\0';
}