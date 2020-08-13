///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : DispplayDigits
// Parameters    : Integer
// Return Value  : None
// Description   : it is used to display digits in reverse order
// Author        : Swapnil Ramesh Adhav
// Date          : 4 August 2020
//                                                                      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void DispplayDigits(int iValue)
{                           
    int iDigit = 0;             
    
    while(iValue != 0)
    {
        iDigit = iValue % 10;

        printf("%d\t",iDigit);    

        iValue = iValue / 10;
    }

}
