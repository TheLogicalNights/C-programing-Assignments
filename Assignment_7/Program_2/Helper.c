///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CountOdd
// Parameters    : Integer
// Return Value  : Integer
// Description   : it is used to return count of Odd numbers
// Author        : Swapnil Ramesh Adhav
// Date          : 4 August 2020
//                                                                      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int CountOdd(int iValue)
{                           
    int iDigit = 0;             
    int iCnt = 0;

    while(iValue != 0)
    {
        iDigit = iValue % 10;

        if(iDigit%2!=0)
        {
            iCnt++;
        }    

        iValue = iValue / 10;
    }

    return iCnt;
}
