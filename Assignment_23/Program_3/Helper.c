///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Parameters    : Integer *,Integer,Integer,Integer
// Return Value  : None
// Description   : it takes array,size of array and range as input and display the numbers in between of that range from array
// Author        : Swapnil Ramesh Adhav
// Date          : 19th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Display(int *Arr,int iSize,int iStart,int iEnd)
{
    int iCnt = 0;

    if(iSize<=0)
    {
        return;
    }
    if(Arr==NULL)
    {
        return;
    }
    printf("Output : ");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iStart && Arr[iCnt]<iEnd)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    printf("\n");
}
