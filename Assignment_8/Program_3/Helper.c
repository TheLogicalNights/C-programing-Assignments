///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Factorial
// Parameters    : Integer
// Return Value  : Integer
// Description   : it takes one integer as parameter and return factorial of that number
// Author        : Swapnil Ramesh Adhav
// Date          : 6th August 2020
//                                                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int Factorial(int iValue)
{
    int iFact = 1;
    if(iValue<0)
    {
        iValue = -iValue;
    }
    while (iValue != 1)
    {
        iFact = iFact * iValue;
        iValue--;
    }
    
    return iFact;
}