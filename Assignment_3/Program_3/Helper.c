///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : DisplayEvenFactors
// Parameters    : Integer
// Return Value  : None
// Description   : It takes one parameter as int and display even factors of that number
// Author        : Swapnil Ramesh Adhav
// Date          : 1 August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void DisplayEvenFactors(int iValue)
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
    for(iCnt=1;iCnt<=iValue/2;iCnt++)
    {
        if(((iValue%iCnt)==0) && ((iCnt%2)==0))
        {
            printf("%d\t",iCnt);
        }
    }
}