///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Parameters    : Integer *,Integer
// Return Value  : None
// Description   : it takes array,size of array as input and Display numbers having 3 digits 
// Author        : Swapnil Ramesh Adhav
// Date          : 20th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Display(int *Arr,int iSize)
{
    int iCnt = 0,iNo = 0;
    int iCount = 0;    
    if(iSize<=0)
    {
        return;
    }
    if(Arr==NULL)
    {
        return;
    }
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iCount = 0;
        iNo = Arr[iCnt];
        while(iNo!=0)
        {
            iNo = iNo/10;
            iCount++;
        }
        if(iCount==3)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    printf("\n");
}