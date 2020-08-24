///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Check
// Parameters    : Integer *,Integer
// Return Value  : BOOLEAN
// Description   : it takes array and size of an array as input and check whether the array contains 11 or not
// Author        : Swapnil Ramesh Adhav
// Date          : 19th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL Check(int *Arr,int iSize)
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
        if(Arr[iCnt]==11)
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
