///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountWhite
// Parameters    : String
// Return Value  : None
// Description   : it takes one string as input and return count of white spaces in that string
// Author        : Swapnil Ramesh Adhav
// Date          : 22th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int CountWhite(char *cStr)
{
    int iCount = 0;

    if(cStr==NULL)
    {
        return -1;
    }
    while(*cStr!='\0')
    {
        if((*cStr==32) || (*cStr=='\t'))
        {
            iCount++;
        }
        *cStr++;
    }

    return iCount;
}