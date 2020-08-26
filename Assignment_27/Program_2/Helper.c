///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Funtion Name : CountSmall
// Parameters   : String
// Return Value : Integer
// Description  : it takes one string from user and return the count of small characters from string
// Author       : Swapnil Ramesh Adhav
// Date         : 21th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int CountSmall(char *pString)
{
    int iSmallCount = 0;

    if(pString==NULL)
    {
        return -1;
    }

    while(*pString!='\0')
    {
        if((*pString>=97) && (*pString<=122))
        {
            iSmallCount++;
        }
        *pString++;
    }

    return iSmallCount;
}