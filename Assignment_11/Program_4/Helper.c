///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RangeSumEven
// Parameters    : Integer,Integer
// Return Value  : Integer
// Description   : it takes two integers as input and return the addition of even numbers in range of that two numbers
// Author        : Swapnil Ramesh Adhav
// Date          : 8th August 2020
//                                                                                                                                              
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int RangeSumEven(int iStart,int iEnd)
{
    int iCnt = 0,iSum=0;
    if(iStart>iEnd || iStart<0 || iEnd<0)
    {
        flag = 0;
    }
    else
    {
        for(iCnt=iStart;iCnt<=iEnd;iCnt++)
        {
            if((iCnt%2)==0)
            {
                iSum = iSum + iCnt;
                flag = 1;
            }
        }
    }
    
    return iSum;
}