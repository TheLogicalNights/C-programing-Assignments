///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SumOfDigits
// Parameters    : Integer
// Return Value  : Integer
// Description   : It takes one integer as input and return the sum of digits of that number
// Author        : Swapnil Ramesh Adhav
// Date          : 19th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int SumOfDigits(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;
    if (iNo<0)
    {
        iNo = -iNo;
    }
    if(iNo>0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        SumOfDigits(iNo);
    }
    return iSum;
}