///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Parameters    : Integer *,Integer
// Return Value  : NONE
// Description   : it take one array and array size as input and display all the elements which are divisible by 5 from that array
// Author        : Swapnil Ramesh Adhav
// Date          : 18th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Display(int *Arr, int iLength)
{
    int iCnt = 0;
    if(Arr==NULL)
    {
        return;
    }
    if(iLength<=0)
    {
        return;
    }
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt] % 5)==0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    printf("\n");
}