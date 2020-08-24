///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Frequency
// Parameters    : Integer *,Integer
// Return Value  : Integer
// Description   : it takes array and size of an array as input and return the frequency of 11
// Author        : Swapnil Ramesh Adhav
// Date          : 19th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int Frequency(int *Arr,int iSize)
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
        if(Arr[iCnt]==11)
        {
            iFreq++;
        }
    }

    return iFreq;
}
