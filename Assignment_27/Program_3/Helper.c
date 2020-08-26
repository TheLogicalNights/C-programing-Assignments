///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Difference
// Parameters    : String, Integer *
// Return Value  : BOOLEAN
// Description   : it takes string and integer reference as input and calculate the difference between capital and small frequency and store into that integer reference 
// Author        : Swapnil Ramesh Adhav
// Date          : 21th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL Difference(char *pString,int *pDifference)
{
    int iSmall = 0, iCapital = 0;
    if(pString==NULL)
    {
        return FALSE;
    }
    while(*pString!='\0')
    {
        if((*pString>=65) && (*pString<=90))
        {
            iCapital++;
        }
        if((*pString>=97) && (*pString<=122))
        {
            iSmall++;
        }
        pString++;
    }

    *pDifference = iCapital - iSmall;
    if(*pDifference<0)
    {
        *pDifference = -*pDifference;
    }

    return TRUE;

}