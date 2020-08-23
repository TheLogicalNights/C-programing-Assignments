///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Parameters   : Integer,Interger
// Return Value : None
// Description  : it takes no of rows and columns and print perticular pattern
// Author       : Swapnil Ramesh Adhav
// Date         : 13th August 2020
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Pattern(int iRow,int iColumn)
{
    int iOuter = 0,iInner = 0;
    if(iRow<0)
    {
        iRow = -iRow;
    }
    if(iColumn<0)
    {
        iColumn = -iColumn;
    }
    if(iRow!=iColumn)
    {
        return;
    }
    for(iOuter=iRow;iOuter>=1;iOuter--)
    {
        for(iInner=1;iInner<=iColumn;iInner++)
        {
            if(iOuter==iInner)
            {
                printf("#\t");
            }
            else if(iInner>iOuter)
            {
                printf("@\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}