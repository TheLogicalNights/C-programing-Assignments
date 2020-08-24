///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Difference
// Parameters    : Integer * , Integer
// Return Value  : Boolean
// Description   : it takes one array and size of that array as input and return difference between even and odd numbers in that array
// Author        : Swapnil Ramesh Adhav
// Date          : 18th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL Difference(int *Arr, int iLength,int *pDiff)
{
    int iCnt = 0;
    int iEven = 0;
    int iOdd = 0;

    if(Arr==NULL)
    {
        return FALSE;
    }
    if(iLength<=0)
    {
        return FALSE;
    }
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt] % 2)==0)
        {
            iEven = iEven + Arr[iCnt];
        }
        else
        {
            iOdd = iOdd + Arr[iCnt];
        }
    }

    *pDiff = iEven - iOdd;

    return TRUE;
}