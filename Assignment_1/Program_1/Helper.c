#include "Header.h"
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Divide.
// Parameters    : Integer, Integer.
// Return Value  : Integer.
// Description   : This is simple function which will take 2 numbers as parameter and return their answer of division. 
// Author        : Swapnil Ramesh Adhav.
// Date          : 24 july 2020.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    if(iNo2==0)
    {
        return -1;
    }
    iAns = iNo1 / iNo2;
    return iAns;
}
