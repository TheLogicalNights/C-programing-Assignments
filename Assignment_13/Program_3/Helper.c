///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Funtion Name : Pattern
// Parameter    : Integer
// Return Value : None
// Description  : it takes one integer as input and print perticular pattern
// Author       : Swapnil Ramesh Adhav
// Date         : 11th August 2020
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Pattern(int iNo)
{
    int iCnt = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }
    printf("\n");
}