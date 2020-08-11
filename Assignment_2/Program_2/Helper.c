
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Dispaly
// Parameters    : Integer
// Return Value  : None
// Description   : This function takes integer as input and print that number of * on the screen
// Author        : Swapnil Ramesh Adhav
// Date          : 24 july 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"
void Display(int iValue)
{
    while (iValue>0)
    {
        printf("*");
        iValue--;
    }   
}