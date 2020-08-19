///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program Name : Display
// Parameters   : Integer
// Return Value : None
// Description  : it takes one integer as input and print the numbers till that number
// Authot       : Swapnil Ramesh Adhav
// Date         : 6th August 2020
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Display(int iValue)
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=iValue;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}