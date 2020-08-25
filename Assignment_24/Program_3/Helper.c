///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Difference
// Parameters    : Integer *,Integer
// Return Value  : Integer
// Description   : it takes array,size of array as input and return the Smallest number from the array 
// Author        : Swapnil Ramesh Adhav
// Date          : 20th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int Difference(int *Arr,int iSize)
{
    int iCnt = 0;
    int iMin = 0;
    int iMax = 0;
    if(iSize<=0)
    {
        return -1;
    }
    if(Arr==NULL)
    {
        return -1;
    }
    iMin = Arr[0];
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax-iMin;      
}