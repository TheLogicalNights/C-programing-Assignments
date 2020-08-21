///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : OddFact
// Parameters    : Integer
// Return Value  : Integer
// Description   : It takes one integer as input and return difference between Even factorial and Odd factorial
// Author        : Swapnil Ramesh Adhav
// Date          : 9th August 2020
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int DifferenceFact(int iNo)
{
    int iFactEven = 1;
    int iFactOdd = 1;
    int iAns = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while (iNo != 1)
    {
        if((iNo % 2)==0)
        {
            iFactEven = iFactEven * iNo; 
        }
        else
        {
            iFactOdd = iFactOdd * iNo;
        }
        iNo--;
    }
    
    iAns = iFactEven - iFactOdd;

    return iAns;
}