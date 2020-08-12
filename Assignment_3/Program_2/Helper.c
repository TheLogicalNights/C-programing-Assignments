///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayEvenFactors
// Parameters    : Integer
// Return Value  : None
// Description   : it is used to Display Even factors of a number
// Author        : Swapnil Ramesh Adhav
//  Date         : 1 August 2020
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
        if((iValue % iCnt)==0)
        {
            if((iCnt % 2 ) == 0)
            {
                printf("%d\t",iCnt);
            }
        }
    }
}