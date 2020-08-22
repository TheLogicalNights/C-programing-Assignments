///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Parameters    : Integer,Integer
// Return Value  : None 
// Description   : it takes number of roes and number of columns from user and print perticular pattern
// Author        : Swapnil Ramesh Adhav
// Date          : 12th August 2020
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Pattern(int iRow,int iColumn)
{
    int iOuter = 0, iInner = 0;
    if(iRow<0)
    {
        iRow = -iRow;
    }
    if(iColumn<0)
    {
        iColumn = -iColumn;
    }
    if(iRow != iColumn)
    {
        return;
    }
    for(iOuter=1;iOuter<=iRow;iOuter++)
    {
        for(iInner=1;iInner<=iColumn;iInner++)
        {
            if(iInner==iOuter || iOuter > iInner)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }           
        }
        printf("\n");
    }
}