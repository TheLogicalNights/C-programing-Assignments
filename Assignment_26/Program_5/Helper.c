///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Parameters    : Char
// Return Value  : None
// Description   : it takes one character as input and display its ASCII value in decimal,hexadecimal and octal
// Author        : Swapnil Ramesh Adhav
// Date          : 21th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Display(char ch)
{
    printf("Deciaml :     %d\n",ch);
    printf("Hexadecimal : 0X%X\n",ch);
    printf("Octal :       %o\n",ch);
}