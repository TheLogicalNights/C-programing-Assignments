///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Frequency
// Parameters    : Integer *,Integer
// Return Value  : BOOLEAN
// Description   : it takes array,size of array and one int as input and check whether that integer is present or not in that array
// Author        : Swapnil Ramesh Adhav
// Date          : 19th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL Frequency(int *Arr,int iSize,int iValue)
{
    int iCnt = 0;
    
    if(iSize<=0)
    {
        return ERROR;
    }
    if(Arr==NULL)
    {
        return ERROR;
    }

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iValue)
        {
            break;
        }
    }
    if(iCnt<iSize)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
