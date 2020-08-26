///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountCapital
// Parameter     : String
// Return Value  : Integer
// Description   : it takes one string as input and return count of capital characters from it
// Author        : Swapnil Ramesh Adhav
// Date          : 21th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int CountCapital(char *pString)
{
    int iCapitalCount = 0;

    if(pString==NULL)
    {
        return -1;
    }
    while(*pString!='\0')
    {
        if((*pString>=65) && (*pString<=90))
        {
            iCapitalCount++;
        }
        *pString++;
    }

    return iCapitalCount;
}