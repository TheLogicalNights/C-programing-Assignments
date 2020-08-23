///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : IncomeTax
// Parameters    : Integer
// Return Value  : Float
// Description   : it takes income from user as input and return income tax amount
// Author        : Swapnil Ramesh Adhav
// Date          : 19th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

float IncomeTax(int iAmount)
{
    float fTax = 0.0;
    float fTax1 = 0.0;
    float fTax2 = 0.0;
    int iAmount1 = 0;
    int iAmount2 = 0;

    if(iAmount<500000)
    {
        return 0.0;
    }
    else if(iAmount>500000 && iAmount<1000000)
    {
        iAmount = iAmount - 500000;               // there is no tax if income is less than 500000 so subtract 500000 from Income amount
        fTax = iAmount*(10./100);                 // after subtraction 500000 from Income amount we get how much amount is more than 500000 so calculate tax for that amount at rate 10%
        return fTax;   
    }
    else if(iAmount>1000000 && iAmount<2000000)
    {
        iAmount = iAmount - 500000;               // there is no tax if income is less than 500000 so subtract 500000 from Income amount
        iAmount1 = iAmount - 500000;              // the Income ammount is greater than 1000000 so subtract more 500000 from amount
        fTax = 500000*(10./100);                  // if income is between 500000 and 1000000 tax is 10% and we subtracted 500000 from amount in prev step so calculate tax for 500000 at rate 10%
        fTax1 = iAmount1*(20./100);               // if income is between 1000000 and 2000000 tax is 20%,after subtracting 1000000 from prev two steps we get how much amount is more than 1000000 so calculate tax for that excess amount at rate 20% 
        return fTax + fTax1;
    }
    else
    {
        iAmount = iAmount - 500000;               // there is no tax if income is less than 500000 so subtract 500000 from Income ammount
        iAmount1 = iAmount - 500000;              // the Income ammount is greater than 1000000 so subtract more 500000 from amount
        iAmount2 = iAmount1 - 1000000;            // the Income ammount is greater than 1000000 so subtract more 1000000 from amount

        fTax = 500000*(10./100);                  // if income is between 500000 and 1000000 tax is 10% and we subtracted 500000 from amount in prev step so calculate tax for 500000 at rate 10%
        fTax1 = 1000000*(20./100);                // if income is between 1000000 and 2000000 tax is 20% and we subtracted 1000000 from amount in prev step so calculate tax for 1000000 at rate 20% 
        fTax2 = iAmount2*(30./100);               // if income is greater than 2000000 tax is 30%,after subtracting 1000000 and 500000 from prev two steps we get how much amount is more than 2000000 so calculate tax for that excess amount at rate 30% 
        return fTax + fTax1 + fTax2;
    }
}