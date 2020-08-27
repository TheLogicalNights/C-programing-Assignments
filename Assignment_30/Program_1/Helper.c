///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrCpyX
// Parameters    : String , String
// Return Value  : None 
// Description   : it takes tow strings as source and destination and copy source string into destination String
// Author        : Swapnil Ramesh Adhav
// Date          : 26th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void StrCpyX(char *cStr1,char *cStr2)
{
    if(cStr1==NULL || cStr2==NULL)
    {
         return;
    }
    while(*cStr1 != '\0')
    {
        *cStr2 = *cStr1;
        cStr1++;
        cStr2++;
    }
    *cStr2 = '\0';
}