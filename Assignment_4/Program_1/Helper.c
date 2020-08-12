///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : MultiplicationOfFactors
// Parameters    : Integer
// Return Value  : Integer
// Description   : It takes one integer as parameter and return the multiplication of factors of that number
// Author        : Swapnil Ramesh Adhav
// Date          : 2 August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int MultiplicationOfFactors(int iValue)
{
    int iCnt = 0, iAns = 1;

    if(iValue==0 || iVAlue==1)
    {
        return 0;
    }

    if(iValue<0)
    {
        iValue = -iValue;
    }

    for(iCnt=2;iCnt<=iValue/2;iCnt++)
    {
        if((iValue%iCnt)==0)
        {
            iAns = iAns * iCnt;
        }
    }
    return iAns;
}