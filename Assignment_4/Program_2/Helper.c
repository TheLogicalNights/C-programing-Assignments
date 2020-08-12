///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayRevFactors
// Parameters    : Integer
// Return Value  : Integer
// Description   : It takes one parameter as int and display factors of that number in reverse order
// Author        : Swapnil Ramesh Adhav
// Date          : 2 August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void DisplayRevFactors(int iValue)
{
    int iCnt = 0;
    if(iValue==1)
    {
        return;
    }
    if(iValue<0)
    {
        iValue = -iValue;
    }
    for(iCnt=iValue/2;iCnt>=1;iCnt--)
    {
        if(iValue%iCnt==0)
        {
            printf("%d\t",iCnt);
        }
    }
}