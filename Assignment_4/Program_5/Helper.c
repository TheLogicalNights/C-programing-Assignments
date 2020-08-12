///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FactDiff
// Parameters    : Integer
// Return Value  : Integer
// Description   : it takes one int as parameter and return difference between the factors and non factors of that number 
// Author        : Swapnil Ramesh Adhav
// Date          : 2 August 2020                                                                                            
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int FactDiff(int iValue)
{
    int iCnt = 0, iFact = 0, iNonfact = 0, iAns = 0;
    if(iValue<0)
    {
        iValue = -iValue;
    }
    if(iValue==1)
    {
        return 0;
    }
    for(iCnt=1;iCnt<iValue;iCnt++)
    {
        if(iValue%iCnt==0)
        {
            iFact = iFact + iCnt;
        }
        if(iValue%iCnt!=0)
        {
            iNonfact = iNonfact + iCnt;
        }
    }
    iAns = iFact - iNonfact;
    return iAns;
}