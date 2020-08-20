///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayRangeRev
// Parameters    : Integer,Integer
// Return Value  : None
// Description   : it takes two inptgers as input and display range between them in reverse order
// Author        : Swapnil Ramesh Adhav
// Date          : 8th August 2020
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void DisplayRangeRev(int iStart,int iEnd)
{
    int iCnt = 0;
    if(iStart>iEnd)
    {
        printf("Invalid Input\n");
    }
    else
    {
        for (iCnt=iEnd;iCnt>=iStart;iCnt--)
        {
            printf("%d\t",iCnt);
        }
        
    }
}