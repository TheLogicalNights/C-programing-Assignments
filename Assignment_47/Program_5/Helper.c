///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Reverse
// Parameters    : Integer
// Return Value  : Integer
// Description   : It takes one integer as input and returns reverse of that number
// Author        : Swapnil Ramesh Adhav
// Date          : 19th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int Reverse(int iNo)
{
    static int iReverse = 0;
    int iDigit = 0;
    if (iNo<0)
    {
        iNo = -iNo;
    }
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iReverse = ((iReverse*10) + iDigit);
        iNo = iNo / 10;
        Reverse(iNo);
    }
    return iReverse;
}