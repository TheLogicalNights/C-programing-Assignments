///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrCmpX
// Parameters    : String,String
// Return Value  : BOOLEAN
// Description   : It takes two strings as user and check whether contents of strings are equal or not
// Author        : Swapnil Ramesh adhav
// Date          : 6th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL StrCmpX(char *cStr1,char *cStr2)
{
    int i = 0;
    if((cStr1==NULL) || (cStr2==NULL))
    {
        return ERROR;
    }
    while((*cStr1 != '\0') && (*cStr2 != '\0'))
    {
        if(*cStr1 != *cStr2)
        {
            break;
        }
        cStr1++;
        cStr2++;
    }
    if((*cStr1=='\0') && (*cStr2=='\0'))
    {
        return EQUAL;
    }
    else
    {
        return UNEQUAL;
    }
}