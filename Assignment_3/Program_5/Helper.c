///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkVowel
// Parameters    : Char
// Return Value  : BOOL
//  Description  : It is used to check character is Vowel or not
// Author        : Swapnil Ramesh Adhav 
// Date          : 1 August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkVowel(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + 32;
    }
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}