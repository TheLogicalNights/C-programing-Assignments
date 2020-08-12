///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayConvert
// Parameters    : Char
// Return Value  : None
// Description   : it takes char as parameter and converts the case of character
// Author        : Swapnil Ramesh Adhav 
//  Date         : 1 August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void DisplayConvert(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + 32;
        printf("%c",cValue);
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        cValue = cValue - 32;
        printf("%c",cValue);
    }
}