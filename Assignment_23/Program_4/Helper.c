///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : LastOcc
// Parameters    : Integer *,Integer
// Return Value  : Integer
// Description   : it takes array,size of array and one int as input and return the index of Last occurence of that number
// Author        : Swapnil Ramesh Adhav
// Date          : 19th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int LastOcc(int *Arr,int iSize,int iValue)
{
    int iCnt = 0;
    int iOccurence = 0;
    if(iSize<=0)
    {
        return -2;
    }
    if(Arr==NULL)
    {
        return -3;
    }

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iValue)
        {
            iOccurence = iCnt;
        }
    }
    if(iOccurence>0)
    {
        return iOccurence;
    }
    else
    {
        return -1;
    }
}
