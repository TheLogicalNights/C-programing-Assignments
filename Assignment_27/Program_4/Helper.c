///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Funtion Name : ChkVowel
// Parameters   : String
// Return Value : BOOLEAN
// Description  : it take one string as input and check whether string contains Vowel or not
// Author       : Swapnil Ramesh Adhav
// Date         : 21th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkVowel(char *cString)
{
    if(cString==NULL)
    {
        return ERROR;
    }
    while(*cString!='\0')
    {
        if(*cString=='A' || *cString=='E' || *cString=='I' || *cString=='O' || *cString=='U' || *cString=='a' || *cString=='e' || *cString=='i' || *cString=='o' || *cString=='u')
        {
            break;
        }
        cString++;
    }

    if(*cString=='\0')
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}