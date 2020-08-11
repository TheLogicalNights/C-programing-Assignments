
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkEvenOdd
// Parameters    : Integer
// Return Value  : BOOL
// Description   : This function take integer as parameter and check whether it is even or odd
// Author        : Swapnil Ramesh Adhav
// Date          : 24 july 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"

int ChkEvenOdd(int iX)
{
    if((iX % 2)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
