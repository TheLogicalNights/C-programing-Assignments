///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Small
// Parameters    : String
// Return Value  : Integer
// Description   : It takes one string as input and returns number of small characters in it
// Author        : Swapnil Ramesh Adhav
// Date          : 19th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int Small(char *pStr)
{
    static int iRet = 0;
    if(*pStr != '\0')
    {
        if((*pStr>='a') && (*pStr<='z'))
        {
            iRet++;
        }
        pStr++;
        Small(pStr);
    }
    return iRet;
}