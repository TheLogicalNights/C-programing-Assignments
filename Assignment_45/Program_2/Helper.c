///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Parameters    : Integer
// Return Value  : None
// Description   : It takes one integer as input and display numbers till that integer
// Author        : Swapnil Ramesh Adhav
// Date          : 18th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Display(int iCnt)
{
    static int iCount = 1;
    if (iCnt<0)
    {
        iCnt = -iCnt;
    }
    if(iCount<=iCnt)
    {
        printf("%d\t",iCount);
        iCount++;
        Display(iCnt);
    }
}