///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CountFour
// Parameters    : Integer
// Return Value  : None
// Description   : it is used to count frequency of 4
// Author        : Swapnil Ramesh Adhav
// Date          : 4 August 2020
//                                                                      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int CountFour(int iValue)
{                           
    int iDigit = 0;             
    int iCnt = 0;
    
    while(iValue != 0)
    {
        iDigit = iValue % 10;

        if(iDigit==4)
        {
            iCnt++;
        }        

        iValue = iValue / 10;
    }

    return iCnt;

}



















