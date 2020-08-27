///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrCpySmall
// Parameters    : String,String
// Return Value  : None
// Description   : it takes two string as input and copy small characters from source string to destination string
// Author        : Swapnil Ramesh Adhav
// Date          : 26th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void StrCpySmall(char *cStr1,char *cStr2)
{
    if(cStr1==NULL || cStr2==NULL)
    {
        return;
    }
    while(*cStr1 != '\0')
    {
        if((*cStr1 >= 'a') && (*cStr1 <= 'z'))
        {
            *cStr2 = *cStr1;
            cStr2++;
        }
        cStr1++;
    }
    *cStr2 = '\0';
}