///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SmallDigit
// Parameters    : Integer
// Return Value  : Integer
// Description   : It takes one integer as input and return Samll digit from that number
// Author        : Swapnil Ramesh Adhav
// Date          : 19th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int SmallDigit(int iNo)
{
    static int iMin = 10;
    int iDigit = 0;
    if (iNo<0)
    {
        iNo = -iNo;
    }
    if(iNo>0)
    {
        iDigit = iNo % 10;
        if(iDigit<iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
        SmallDigit(iNo);
    }
    return iMin;
}