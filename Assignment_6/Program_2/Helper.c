///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : ChkZero
// Parameters    : Integer
// Return Value  : BOOLEAN
// Description   : it is used to check whether number contains zero or not
// Author        : Swapnil Ramesh Adhav
// Date          : 4 August 2020
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkZero(int iValue)
{
    int iDigit = 0;             
    
    while(iValue != 0)
    {
        iDigit = iValue % 10;
        if(iDigit==0)
        {
            return TRUE;
        }       
        iValue = iValue / 10;
    }
    return FALSE;
}