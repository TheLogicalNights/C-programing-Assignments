///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrNCmp
// Parameters    : String,String,Integer
// Return Value  : BOOLEAN
// Description   : it takes two strings and a number as input and check whether the contents of strings are equal or not till that number
// Author        : Swapnil Ramesh Adhav
// Date          : 6th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL StrNCmp(char *cStr1,char *cStr2,int iNo)
{
    if((cStr1==NULL) || (cStr2==NULL) || (iNo<0))
    {
        return ERROR;
    }

    while((*cStr1!='\0') && (*cStr2!='\0') && (iNo!=0))
    {
        if(*cStr1!=*cStr2)
        {
            break;
        }
        iNo--;
        cStr1++;
        cStr2++;
    }
    if((iNo==0) || (*cStr1=='\0') || (*cStr2=='\0'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}