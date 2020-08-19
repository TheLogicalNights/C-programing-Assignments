///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayMultiples
// Parameters    : Integer 
// Return Value  : None
// Description   : it takes one integer as input and print fist 5 multiples of that number
// Author        : Swapnil Ramesh Adhav
// Date          : 7th August 2020
//                                                                                                                      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void DisplayMultiples(int iValue)
{
    int iCnt = 0;
    if(iValue==0)
    {
        return;
    }
    if(iValue<0)
    {
        iValue = -iValue;
    }
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("%d\t",iCnt*iValue);
    }
    
}