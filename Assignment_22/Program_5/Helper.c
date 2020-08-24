///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Frequency
// Parameters    : Integer *,Integer
// Return Value  : Integer
// Description   : it takes array,size of array and one int as input and return the frequency of that integer from the array
// Author        : Swapnil Ramesh Adhav
// Date          : 19th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int Frequency(int *Arr,int iSize,int iValue)
{
    int iCnt = 0;
    int iFreq = 0;

    if(iSize<=0)
    {
        return -1;
    }
    if(Arr==NULL)
    {
        return -2;
    }

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iValue)
        {
            iFreq++;
        }
    }

    return iFreq;
}
