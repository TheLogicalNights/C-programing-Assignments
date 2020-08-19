///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Parameters    : Integer
// Return Value  : None
// Description   : it takes one integer as input and print that number of $ and * on the screen
// Author        : Swapnil Ramesh Adhav
// Date          : 6th August 2020
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Pattern(int iValue)
{
    int iCnt = 0;
    if(iValue<0)
    {
        iValue = -iValue;
    }
    for(iCnt=1;iCnt<=iValue;iCnt++)
    {
        printf("$\t*\t");
    }
}