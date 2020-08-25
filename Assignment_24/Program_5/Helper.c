///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DigitSum
// Parameters    : Integer *,Integer
// Return Value  : None
// Description   : it takes array,size of array as input and Display the sum of digits of each number 
// Author        : Swapnil Ramesh Adhav
// Date          : 20th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void DigitSum(int *Arr,int iSize)
{
    int iCnt = 0,iNo = 0;
    int iSum = 0;
    int iDigit = 0;    
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
        iSum = 0;
        iNo = Arr[iCnt];
        while(iNo!=0)
        {
            iDigit = iNo%10;
            iSum = iSum + iDigit;
            iNo = iNo/10;           
        }
        printf("%d\t",iSum);
    }
    printf("\n");
}