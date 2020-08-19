///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Table
//  Parameters   : Integer
// Return Value  : None
// Description   : it takes one number as input and display table of that number
// Author        : Swapnil Ramesh Adhav
// Date          : 6th August 2020
//                                                                                                                      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Table(int iValue)
{
    int iCnt = 0;
    if(iValue<0)
    {
        iValue = -iValue;
    }
    for(iCnt=1;iCnt<=10;iCnt++)
    {
        printf("%d\t",iValue*iCnt);
    }
}