///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : MultDigits
// Parameters    : Integer
// Return Value  : Integer
// Description   : it is used to return count of digits between 3 to 7
// Author        : Swapnil Ramesh Adhav
// Date          : 4 August 2020
//                                                                      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int MultDigits(int iValue)
{                           
    int iDigit = 0;             
    int iAns = 1;

    while(iValue != 0)
    {
        iDigit = iValue % 10;
 
        iAns = iAns * iDigit;

        iValue = iValue / 10;
    }

    return iAns;
}
