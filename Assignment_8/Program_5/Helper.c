///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : TableRev
// Parameters    : Integer
// Return Value  : None
// Description   : it takes one integer as input and print the table of that number in reverse order
// Author        : Swapnil Ramesh Adhav
// Date          : 6th August 2020
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void TableRev(int iValue)
{
    int iCnt = 0;
    if(iValue<0)
    {
        iValue = -iValue;
    }
    for(iCnt=10;iCnt>=1;iCnt--)
    {
        printf("%d\t",iValue*iCnt);
    }
}