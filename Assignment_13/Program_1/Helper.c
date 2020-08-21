///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Parameters    : Integer
// Return Value  : None
// Description   : It takes one integer as input and print that number of alphabets on screen
// Author        : Swapnil Ramesh Adhav
// Date          : 11th August 2020
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
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("%c\t",65+iCnt);
    }
}