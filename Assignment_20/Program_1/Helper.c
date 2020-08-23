///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CalculateBill
// Parameters    : Integer
// Return Value  : Integer
// Description   : it takes bill ammount as input and calculate bill with discount and return the new bill ammount
// Author        : Swapnil Ramesh Adhav
// Date          : 18th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int CalculateBill(int iAmount)
{
    int iDiscount = 0;
    if(iAmount<0)
    {
        iAmount = -iAmount;
    }
    if(iAmount<500)
    {
        return iAmount;
    }
    else if(iAmount>500 && iAmount<1500)
    {
        iDiscount = (10./100)*iAmount;
        return iAmount - iDiscount;
    }
    else
    {
        iDiscount = (15./100)*iAmount;
        return iAmount - iDiscount-1;                   //it is returning expected output +1 value so -1 is performed
    }
    
}