///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display 
// Parameters    : Integer
// Return Value  : None
// Description   : it takes one integer as input and print perticular pattern on the screen
// Author        : Swapnil Ramesh Adhav
// Date          : 19th Sept 2020
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
        printf("%d\t*\t",iCnt);
        iCnt--;
        Display(iCnt);
    }
}