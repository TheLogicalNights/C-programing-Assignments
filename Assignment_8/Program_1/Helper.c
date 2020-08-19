///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Number
// Parameters    : Integer
// Return Value  : None
// Description   : it takes one integer as input and display that number is small or medium or large
// Author        : Swapnil Ramesh Adhav
// Date          : 6th August 2020                                                                                      
//                                                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Number(int iValue)
{
    if(iValue<50)
    {
        printf("Small\n");
    }
    else if(iValue>=50 && iValue<=100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}