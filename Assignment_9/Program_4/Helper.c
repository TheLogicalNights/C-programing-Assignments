///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayOdd
// Parameters    : Integer
// Return Value  : None
// Description   : it takes one integer as input and display odd numbers till that number
// Author        : Swapnil Ramesh Adhav
// Date          : 7th August 2020
//                                                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void DisplayOdd(int iValue)
{
    int iCnt = 0;
    if(iValue<0)
    {
        iValue = -iValue;
    }
    for(iCnt=1;iCnt<=iValue;iCnt++)
    {
        if((iCnt%2)!=0)
        {
            printf("%d\t",iCnt);
        }
    }
}