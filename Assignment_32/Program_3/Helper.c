///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkBit
// Parameters    : Unsigned Integer
// Return Value  : BOOLEAN
// DEscription   : It takes one integer as input and check whether its 7th,15th,21th and 28th bit is ON or OFF
// Author        : Swapnil Ramesh Adhav 
// Date          : 3rd Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkBit(UINT iValue)
{
    int iMask = 0X08104040;
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