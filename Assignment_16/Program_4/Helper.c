///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern 
// PArameters    : Integer,Integer
// Return Value  : None
// Description   : it takes two integers as input and print perticular pattern
// Author        : Swapnil Ramesh Adhav
// Date          : 12th August 2020
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Pattern(int iRow,int iColumn)
{
    int iOuter = 0;
    int iInner = 0;
    if(iRow<0)
    {
        iRow = -iRow;
    }
    if(iColumn<0)
    {
        iColumn = -iColumn;
    }
    for(iOuter=1;iOuter<=iRow;iOuter++)
    {
        for(iInner=1;iInner<=iColumn;iInner++)
        {
            if((iOuter%2)==0)
            {
                printf("%d\t",-iInner);
            }
            else
            {
                printf(" %d\t",iInner);
            }
            
        }
        printf("\n");
    }
}