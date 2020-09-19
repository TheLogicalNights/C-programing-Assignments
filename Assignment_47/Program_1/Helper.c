///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Count 
// Parameters    : String
// Return Value  : Integer
// Description   : it takes one string as input and return number of white spaces from the string
// Author        : Swapnil Ramesh Adhav
// Date          : 19th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int Count(char *cStr) 
{
    static int iCnt = 0;
    if(cStr==NULL)
    {
        return -1;
    }
    if(*cStr != '\0')
    {
        if(*cStr==' ' || *cStr=='\t')
        {
            iCnt++;
        }
        cStr++;
        Count(cStr);
    }
    return iCnt;
}