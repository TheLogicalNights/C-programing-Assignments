///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CommonBits
// Parameters    : Integer,Integer
// Return Value  : None
// Description   : it takes two integers as input and display position of common ON bits 
// Author        : Swapnil Ramesh Adhav
// Date          : 6th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void CommonBits(UINT iValue1,UINT iValue2)
{
    int iMask = 0X00000001;
    int iPos = 1;
    int iResult = 0;

    iResult = iValue1 & iValue2;

    while(iResult != 0)
    {
        if((iResult & iMask)==1)
        {
            printf("%d\t",iPos);
        }
        iPos++;
        iResult = iResult >> 1;
    }
    printf("\n");
}