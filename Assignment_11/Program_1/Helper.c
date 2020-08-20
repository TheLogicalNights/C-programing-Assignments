///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Function Name : DisplayRange
// Parameters    : Integer,Integer
// Return Value  : None
// Description   : it takes two integers as parameter and display all number in that range
// Author        : Swapnil Ramesh Adhav
// Date          : 7th August 2020
//                                                                                                                              
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void DisplayRange(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart>iEnd)
    {
        printf("Error:Invalid Range\n");
        return;
    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}