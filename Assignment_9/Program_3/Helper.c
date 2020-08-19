///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayNUmberLine
// Parameters    : Integer
// Return Value  : None
// Description   : It takes one integer as input and display number line of that number
// Author        : Swapnil Ramesh Adhav
// Date          : 7th August 2020
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void DisplayNUmberLine(int iValue)
{
    int iCnt = 0;
    if(iValue<0)
    {
        iValue = -iValue;
    }
    for(iCnt = -iValue ;iCnt<=iValue;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}