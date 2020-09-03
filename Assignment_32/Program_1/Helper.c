///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkBit
// Parameters    : Unsigned Integer 
// Return Value  : BOOLEAN
// Description   : It takes one unsigned integer as input and check whether it 15th bit is ON or OFF
// Author        : Swapnil Ramesh Adhav
// Date          : 3rd Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkBit(UINT iValue)
{
    int iMask = 0X00004000;
    int iResult = 0;

    iResult = iValue & iMask;

    if(iResult==iMask)
    {
        return ON;
    }
    else
    {
        return OFF;
    }
}
