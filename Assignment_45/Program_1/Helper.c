///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display 
// Parameters    : Integer
// Return Value  : None
// Description   : it takes one integer as input and print that number of * on the screen
// Author        : Swapnil Ramesh Adhav
// Date          : 18th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Display(int iCnt)
{
    if(iCnt<0)
    {
        iCnt = -iCnt;
    }
    if(iCnt>0)
    {
        printf("*\t");
        iCnt--;
        Display(iCnt);
    }
}