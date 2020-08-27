///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrCpyCap
// Parameters    : String,String
// Return Value  : None
// Description   : it takes two Strings as input and copy only captal characters into destination string from source string
// Author        : Swapnil Ramesh Adhav
// Date          : 26th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void StrCpyCap(char *cStr1,char *cStr2)
{
    if(cStr1==NULL || cStr2==NULL)
    {
        return;
    }
    while(*cStr1 != '\0')
    {
        if((*cStr1 >= 'A') && (*cStr1 <= 'Z'))
        {
            *cStr2 = *cStr1;
            *cStr2++;
        }
        *cStr1++;
    }
    *cStr2 = '\0';
}