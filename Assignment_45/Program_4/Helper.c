///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Parameters    : Integer
// Return Value  : None
// Description   : It takes one integer as input and display perticular pattern
// Author        : Swapnil Ramesh Adhav
// Date          : 18th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Display(int iCnt)
{
    static int iCount = 0;
    if (iCnt<0)
    {
        iCnt = -iCnt;
    }
    if(iCount<iCnt)
    {
        printf("%c\t",65+iCount);
        iCount++;
        Display(iCnt);
    }
}