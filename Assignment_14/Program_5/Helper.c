///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Paremeters    : Integer,Integer
// Return Value  : None
// Description   : it takes number of rows and number of columns as input and print perticular pattern
// Author        : Swapnil Ramesh Adhav
// Date          : 11th August 2020
//                                                                                                                      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Pattern(int iRow,int iColumn)
{
    int iOuter=0,iInnter=0;
    if (iRow<0)
    {
        iRow = -iRow;
    }
    if(iColumn<0)
    {
        iColumn = -iColumn;
    }
    for(iOuter=1;iOuter<=iRow;iOuter++)
    {
        for(iInnter=1;iInnter<=iColumn;iInnter++)
        {
            printf("%d\t",iOuter);
        }
        printf("\n");
    }
}