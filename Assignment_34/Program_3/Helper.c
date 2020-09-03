///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : OnBit
// Parameters    : Unsigned Integer, Integer
// Return Value  : Unsigned Integer
// Description   : It takes one Integer and bit position and turn ON the perticular bit
// Author        : Swapnil Ramesh Adhav 
// Date          : 3rd Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

UINT OnBit(UINT iValue,int iPos)
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
        return iValue;
    }
    else
    {
        iResult = iValue ^ iMask;
        return iResult;
    }
}