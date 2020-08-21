///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Parameters    : Integer,Integer
// Retuen Value  : None
// Description   : it takes no of rows and column as input and print perticular pattern
// Author        : Swapnil Ramesh Adhav
// Date          : 11th August 2020
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
        for(iInner=iColumn;iInner>=1;iInner--)
        {
            printf("%d\t",iInner);
        }
        printf("\n");
    }
}