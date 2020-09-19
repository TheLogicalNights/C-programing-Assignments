///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Product
// Parameters    : Integer
// Return Value  : Integer
// Description   : It takes one integer as input and returns the product of digits of that number
// Author        : Swapnil Ramesh Adhav
// Date          : 19th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int Product(int iNo)
{
    static int iProduct = 1;
    int iDigit = 0;
    if (iNo<0)
    {
        iNo = -iNo;
    }
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit==0)
        {
            iDigit = 1;
        }
        iProduct = iProduct * iDigit;
        iNo = iNo / 10;
        Product(iNo);
    }
    return iProduct;
}