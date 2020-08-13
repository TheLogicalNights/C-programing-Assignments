///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Multiply
// Parameters    : Integer, Integer, Integer
// Return Value  : Integer
// Description   : it is used to return multiplication of integers
// Author        : Swapnil Ramesh Adhav
// Date          : 3 August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int Multiply(int iValue1, int iValue2, int iValue3)
{
    int iAns = 0;
     
    if(iValue1==0)  
    {
        iAns = iValue2 * iValue3;
    }
    else if(iValue2==0)  
    {
        iAns = iValue1 * iValue3;
    }
    else if(iValue3==0)  
    {
        iAns = iValue1 * iValue2;
    }
    else if(iValue1==0 && iValue2==0)  
    {
        return iValue3;
    }
    else if(iValue1==0 && iValue3==0)  
    {
        return iValue2;
    }
    else if(iValue2==0 && iValue3==0)  
    {
        return iValue1;
    }
    else
    {
      iAns = iValue1 * iValue2 * iValue3;   
    }

    return iAns;   
}