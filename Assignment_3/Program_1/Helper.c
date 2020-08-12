///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayEven
// Parameters    : Integer
// Return Value  : None
// Description   : It takes one int as parameter and print that number of even numbers on screen
// Author        : Swapnil Ramesh Adhav
// Date          : 1 August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"
void DisplayEven(int iValue)
{
    int iCnt = 0, iItr = 1;
    if(iValue<=0)
    {
        return;
    }
    while (iCnt != iValue)
    {
        if((iItr % 2)==0)
        {
            printf("%d\t",iItr);
            iCnt++;
        }
        iItr++;
    }
    
}