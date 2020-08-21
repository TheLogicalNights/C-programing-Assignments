///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Parameters    : Integer
// Return Value  : None
// Description   : It takes one integer as input and print perticular pattern
// Author        : Swapnil Ramesh Adhav
// Date          : 11th August 2020
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
        printf("%d\t",2*iCnt);
    }
    printf("\n");
}