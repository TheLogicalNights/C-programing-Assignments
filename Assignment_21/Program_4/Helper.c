///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Dispaly
// Parameters    : Integer *,Integer
// Return Value  : None
// Description   : it takes array and size of array as input and display the numbers are divisible by 3 and 5 from that array
// Author        : Swapnil Ramesh Adhav
// Date          : 18th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Display(int *Arr,int iSize)
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
        if(((Arr[iCnt]%3)==0) && ((Arr[iCnt]%5)==0))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    printf("\n");
}