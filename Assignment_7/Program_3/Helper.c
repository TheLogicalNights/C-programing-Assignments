///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CountRange
// Parameters    : Integer
// Return Value  : Integer
// Description   : it is used to return count of digits between 3 to 7
// Author        : Swapnil Ramesh Adhav
// Date          : 4 August 2020
//                                                                      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int CountRange(int iValue)
{                           
    int iDigit = 0;             
    int iCnt = 0;

    while(iValue != 0)
    {
        iDigit = iValue % 10;

        if(iDigit>=3 && iDigit<=7)
        {
            iCnt++;
        }    

        iValue = iValue / 10;
    }

    return iCnt;
}
