///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Count
// Parameters    : Integer
// Return Value  : None
// Description   : it is used to count frequency of such a digits which are less than 6
// Author        : Swapnil Ramesh Adhav
// Date          : 4 August 2020
//                                                                      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int Count(int iValue)
{                           
    int iDigit = 0;             
    int iCnt = 0;
    
    while(iValue != 0)
    {
        iDigit = iValue % 10;

        if(iDigit<6)
        {
            iCnt++;
        }        

        iValue = iValue / 10;
    }

    return iCnt;

}



















