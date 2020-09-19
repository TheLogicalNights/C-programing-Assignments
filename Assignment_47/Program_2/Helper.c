///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : MaxDigit
// Parameters    : Integer
// Return Value  : Integer
// Description   : It takes one integer as input and return the largest digit from that number
// Author        : Swapnil Ramesh Adhav
// Date          : 19th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int MaxDigit(int iNo)
{
    static int iMax = 0;
    int iDigit = 0;
    
    if (iNo<0)
    {
        iNo = -iNo;
    }
    if(iNo>0)
    {
        iDigit = iNo % 10;
        if(iDigit>iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
        MaxDigit(iNo);
    }
    return iMax;
}