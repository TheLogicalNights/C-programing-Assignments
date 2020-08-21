///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DollorToINR
// Parameters    : Integer
// Return Value  : Integer
// Description   : It takes one integer(USD) as input and return its corresponding value in INR
// Author        : Swapnil Ramesh Adhav
// Date          : 9th August 2020
//                                                                                                                              
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include "Header.h"

int DollorToINR(int iUSD)
{
    if(iUSD<0)
    {
        iUSD = -iUSD;
    }

    return iUSD * 70;
}