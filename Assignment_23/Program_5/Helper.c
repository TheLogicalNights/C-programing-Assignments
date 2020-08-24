///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Product
// Parameters    : Integer *,Integer
// Return Value  : Integer
// Description   : it takes array,size of array as input and return the product of odd elements of array 
// Author        : Swapnil Ramesh Adhav
// Date          : 19th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int Product(int *Arr,int iSize)
{
    int iCnt = 0;
    int iProduct = 1;
    int iFlag = 0;
    if(iSize<=0)
    {
        return -1;
    }
    if(Arr==NULL)
    {
        return -1;
    }

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%2)!=0)
        {
            iProduct = iProduct * Arr[iCnt];
            iFlag++;
        }
    }
    if(iFlag>0)
    {
        return iProduct;
    }
    else
    {
        return 0;
    }        
}
