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
    int iDisp = 0;
    if(iRow<0)
    {
        iRow = -iRow;
    }
    if(iColumn<0)
    {
        iColumn = -iColumn;
    }
    for(iOuter=0;iOuter<iRow;iOuter++)
    {
        for(iInner=1;iInner<=iColumn;iInner++)
        {
            printf("%d\t",iOuter+iInner);    
        }
        printf("\n");
    }
}