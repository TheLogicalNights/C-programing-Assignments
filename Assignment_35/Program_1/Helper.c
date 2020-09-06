///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountOne
// Parameters    : Integer
// Return Value  : Integer
// Description   : It takes one integer as input and count the number of bits that are ON
// Author        : Swapnil Ramesh Adhav
// Date          : 6th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

UINT CountOne(UINT iValue)
{
    int iMask = 0x00000001;
    UINT iCnt = 0;
    int iResult = 0;

    if(iValue<0)
    {
        return -1;
    }
    while(iValue!=0)
    {
        iResult = iValue & iMask;
        if(iResult==iMask)
        {
            iCnt++;
        }
        iValue = iValue >> 1;
    }
    return iCnt;
}