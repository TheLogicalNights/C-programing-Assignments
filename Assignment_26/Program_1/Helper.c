///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayASCII
// Parameters    : None
// Return Value  : None
// Description   : it Displays ASCII values of all characters from 0 to 255 in decimal,hexadecimal and octal
// Author        : Swapnil Ramesh Adhav
// Date          : 21th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void DisplayASCII()
{
    int iCnt = 0;
    printf("Character    Decimal\t    Hexadecimal        Octal\n");
    for(iCnt=0;iCnt<=255;iCnt++)
    {
        printf("%c\t\t%d\t\t%X\t\t%o\n",iCnt,iCnt,iCnt,iCnt);
    }
}