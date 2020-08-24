///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Parameters    : Integer *,Integer
// Return Value  : None
// Description   : it takes array and size of array as input and display the elements are even as well as divisible by 5
// Author        : Swapnil Ramesh Adhav
// Date          : 18th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Display(int *ptr,int iSize)
{
    int iCnt = 0;
    if(iSize<=0)
    {
        return;
    }
    if(ptr==NULL)
    {
        return;
    }
    printf("Output : ");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(((ptr[iCnt]%2)==0) && ((ptr[iCnt]%5)==0))
        {
            printf("%d\t",ptr[iCnt]);
        }
    }
    printf("\n");
}