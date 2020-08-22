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
    int iDisp = 1;
    if(iRow<0)
    {
        iRow = -iRow;
    }
    if(iColumn<0)
    {
        iColumn = -iColumn;
    }
    for(iOuter=iRow;iOuter>=1;iOuter--)
    {
        for(iInner=0;iInner<iColumn;iInner++)
        {
            if(iDisp>9)
            {
                iDisp = 1;
            }
            printf("%d\t",iDisp);
            iDisp++;
        }
        printf("\n");
    }
}