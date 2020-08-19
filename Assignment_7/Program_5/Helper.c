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

int CountDiff(int iValue)
{                           
    int iDigit = 0;             
    int iEven = 0;
    int iOdd = 0;
    int iAns = 0;

    while(iValue != 0)
    {
        iDigit = iValue % 10;
    
        if(iDigit%2==0)
        {
            iEven = iEven + iDigit;
        }
        else if(iDigit%2!=0)
        {
            iOdd = iOdd + iDigit;
        }

        iValue = iValue / 10;
    }

    iAns = iEven - iOdd;

    return iAns;
}
