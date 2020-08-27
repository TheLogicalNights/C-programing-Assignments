///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrNCpyX
// Parameters    : String,String,Integer
// Return Value  : None
// Description   : it takes two strings and one integer as input and copy that much elements from source string to destination String
// Author        : Swapnil Ramesh Adhav
// Date          : 26th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void StrNCpyX(char *cStr1,char *cStr2,int iValue)
{
    if(cStr1==NULL || cStr2==NULL || iValue<=0)
    {
        return;
    }
    while((*cStr1!='\0') && (iValue>0))
    {
        *cStr2 = *cStr1;
        cStr1++;
        cStr2++;
        iValue--;
    }
    *cStr2 = '\0'; 
}