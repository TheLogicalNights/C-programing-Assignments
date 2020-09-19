///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Fact
// Parameters    : Integer
// Return Value  : Integer
// Description   : It takes one integer as input and return factorial of that number
// Author        : Swapnil Ramesh Adhav
// Date          : 19th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int Fact(int iNo)
{
    static int iFact = 1;
    if (iNo<0)
    {
        iNo = -iNo;
    }
    if(iNo>0)
    {
        iFact = iFact * iNo;
        iNo--;
        Fact(iNo);
    }
    return iFact;
}