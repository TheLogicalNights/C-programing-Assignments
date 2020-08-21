///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Parameters    : Integer
// Return Value  : None
// Description   : It takes one integer as input and print * # pattern according to input
// Author        : Swapnil Ramesh Adhav
// Date          : 8th August 2020
//                                                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Display(int iValue)
{
    int iCnt = 0;
    if(iValue<0)
    {
        iValue = -iValue;
    }
    for(iCnt=1;iCnt<=iValue*2;iCnt++)
    {
        if(iCnt<=iValue)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
    }
}