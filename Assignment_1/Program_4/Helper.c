#include "Header.h"
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Function name : Check
// Parameter     : Integer
// Return Value  : BOOL
// Description   : this function takes integer as parameter and check whether it is divisible by 5 or not
// Author        : Swapnil Ramesh Adhav.
// Date          : 24 july 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
BOOL Check(int iValue)
{
    if((iValue % 5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}