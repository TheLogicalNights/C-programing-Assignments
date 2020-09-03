///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : OffBit
// Parameters    : Unsigned Integer
// Return Value  : Unsigned Integer
// Description   : It takes one number and position from user and OFF that perticular bit of that number
// Author        : Swapnil Ramesh Adhav
// Date          : 3rd Sept 2020
//  
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

UINT OffBit(UINT iValue,int iPos)
{
    int iMask = 0X00000001;
    UINT iResult = 0;

    if((iPos<1) || (iPos>32))
    {
        return -1;
    }

    iMask = iMask << (iPos-1);

    iResult = iValue & iMask;

    if(iResult==iMask)
    {
        iResult = iValue ^ iMask;
        return iResult;
    }
    else
    {
        return iValue;
    }

}