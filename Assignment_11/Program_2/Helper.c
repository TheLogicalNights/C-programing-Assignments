///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayRangeEven
// Parameters    : Integer, Integer
// Return Value  : None
// Description   : it takes two integers as input and display even numbers between that two numbers
// Author        : Swapnil Ramesh Adhav
// Date          : 8th August 2020
//                                                                                                                              
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void DisplayRangeEven(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart>iEnd)
    {
        printf("Invalid Range\n");
    }
    else
    {
        for(iCnt=iStart;iCnt<=iEnd;iCnt++)
        {
            if((iCnt%2)==0)
            {
                printf("%d\t",iCnt);
            }
        }
    }
    
}