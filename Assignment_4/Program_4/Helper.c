///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SumOfNonFactors
// Parameters    : Integer
// REturn Value  : Integer
// Description   : it takes one int as parameter and return the sum of non factors of that number
// Author        : Swapnil Ramesh Adhav
// Date          : 2 August 2020
//                                                                                                                      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int SumOfNonFactors(int iValue)
{
    int iCnt = 0, iAns = 0;
    if(iValue==1)
    {
        return 0;
    }
    if(iValue<0)
    {
        iValue = -iValue;
    }
    for(iCnt=1;iCnt<iValue;iCnt++)
    {
        if(iValue%iCnt!=0)
        {
            iAns = iAns + iCnt;
        }
    }
    return iAns;
}