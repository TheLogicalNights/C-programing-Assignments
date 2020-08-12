///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayNonFactors
// Parameters    : Integer
// Return Value  : None
// Description   : it takes one integer as parameter and display the non factors of that number
// Author        : Swapnil Ramesh Adhav
// Date          : 2 August 2020                                                               
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void DisplayNonFactors(int iValue)
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
    for(iCnt=1;iCnt<iValue;iCnt++)
    {
        if(iValue%iCnt!=0)
        {
            printf("%d\t",iCnt);
        }
    }
}