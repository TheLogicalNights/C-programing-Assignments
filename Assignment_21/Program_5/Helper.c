///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Parameters    : Integer *,Integer
// Return Value  : None
// Description   : it takes array and size of an array as input and display the numbers which are divisible by 11 from that array
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
        if((Arr[iCnt]%11)==0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    printf("\n");
}