///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Parameters    : None
// Return Value  : None
// Description   : it is used to display perticylar pattern using recursion
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
        printf("%c\t",65+iCnt);
        iCnt++;
        Display();
    }
}