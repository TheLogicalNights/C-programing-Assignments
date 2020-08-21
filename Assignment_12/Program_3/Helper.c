///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : EvenFact
// Parameters    : Integer
// Return Value  : Integer
// Description   : It takes one integer as input and return even factorial of that number
// Author        : Swapnil Ramesh Adhav
// Date          : 9th August 2020
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int EvenFact(int iNo)
{
    int iFact = 1;
    if(iNo==1)
    {
        return 0;
    }
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while (iNo != 1)
    {
        if((iNo % 2)==0)
        {
            iFact = iFact * iNo; 
        }
        iNo--;
    }
    
    return iFact;
}