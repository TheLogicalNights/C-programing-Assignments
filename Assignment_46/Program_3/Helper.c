///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : NoOfCharacters
// Parameters    : String
// Return Value  : None
// Description   : It takes one string as input and counts number of characters in it
// Author        : Swapnil Ramesh Adhav
// Date          : 19th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void NoOfCharacters(char *pStr,int *pRet)
{
    if(*pStr != '\0')
    {
        *pRet += 1;
        pStr++;
        NoOfCharacters(pStr,pRet);
    }
}