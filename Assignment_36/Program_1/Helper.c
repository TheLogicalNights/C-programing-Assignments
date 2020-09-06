///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrNCat
// Parameters    : String,String,Integer
// Return Value  : None
// Description   : It takes two strings and one number from user and concat that much number of characters of second string after first string
// Author        : Swapnil Ramesh Adhav
// Date          : 6th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void StrNCat(char *cDest,char *cSrc,int iNo)
{
    if((cDest==NULL) || (cSrc==NULL) || iNo < 0)
    {
        return;
    }
    while(*cDest != '\0')
    {
        cDest++;
    }
    *cDest = ' ';
    cDest++;
    while((*cSrc != '\0') && (iNo != 0))
    {
        *cDest = *cSrc;
        cDest++;
        cSrc++;
        iNo--;
    }
    *cDest = '\0';
}