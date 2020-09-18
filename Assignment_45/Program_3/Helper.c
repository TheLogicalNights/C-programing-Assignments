///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Parameters    : Integer
// Return Value  : None
// Description   : It takes one integer as input and display numbers in reverse order till 1
// Author        : Swapnil Ramesh Adhav
// Date          : 18th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Display(int iCnt)
{
    if (iCnt<0)
    {
        iCnt = -iCnt;
    }
    if(iCnt>0)
    {
        printf("%d\t",iCnt);
        iCnt--;
        Display(iCnt);
    }
}