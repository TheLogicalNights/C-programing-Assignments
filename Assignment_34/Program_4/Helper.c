///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ToggleBit
// Parameters    : Unsigned Integer , Integer
// Return Value  : Unsigned Integer
// Description   : It takes one number and bit number from user and toggles that perticular bit
// Author        : Swapnil Ramesh Adhav
// Date          : 3rd Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

UINT ToggleBit(UINT iValue,int iPos)
{
    int iMask = 0X00000001;
    UINT iResult = 0;

    if((iPos<1) || (iPos>32))
    {
        return -1;
    }

    iMask = iMask << (iPos-1);

    iResult = iValue ^ iMask;

    return iResult;
}