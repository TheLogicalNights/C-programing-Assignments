///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Parameters    : None
// Return Value  : None
// Description   : It is used to display perticular pattern using recursion
// Author        : Swapnil Ramesh Adhav
// Date          : 18th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Display()
{
    static int iCnt = 0;
    if(iCnt!=6)
    {
        printf("%c\t",97+iCnt);
        iCnt++;
        Display();
    }
}