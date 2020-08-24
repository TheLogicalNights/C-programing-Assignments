///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Frequency
// Parameters    : Integer *,Integer
// Return Value  : BOOLEAN
// Description   : it takes array and size of an array as input and return the difference between even and odd frequencies.
// Author        : Swapnil Ramesh Adhav
// Date          : 19th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL Frequency(int *Arr,int iSize,int *pDiff)
{
    int iCnt = 0;
    int iEven = 0, iOdd = 0;
    if(iSize<=0)
    {
        return FALSE;
    }
    if(Arr==NULL)
    {
        return FALSE;
    }
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }
    *pDiff = iEven - iOdd;
    return TRUE;
}
