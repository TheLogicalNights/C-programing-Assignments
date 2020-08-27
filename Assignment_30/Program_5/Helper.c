///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrCatX
// Parameters    : String,String
// Return Value  : None  
// Description   : it takes two strings as input and concate second string into first string
// Author        : Swapnil Ramesh Adhav
// Date          : 26th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void StrCatX(char *cStr1,char *cStr2)
{
    if(cStr1==NULL || cStr2==NULL)
    {
        return;
    }
    while(*cStr1 != '\0')
    {
        cStr1++;
    }
    while(*cStr2 != '\0')
    {
        *cStr1 = *cStr2;
        cStr2++;
        cStr1++;
    }
    *cStr1 = '\0';
}