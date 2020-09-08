///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Parameters    : String
// Return Value  : None
// Description   : it takes one string as user and display perticular pattern
// Author        : Swapnil Ramesh Adhav
// Date          : 7th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Pattern(char *Str)
{
    char *Helper;
    int iColumn = 0,iRow=0;
    int iCnt = 0;
    Helper = Str;
    if(Str==NULL)
    {
        return ;
    }
    while(*Helper!='\0')
    {
        iRow++;
        Helper++;
    }

    while(iCnt != iRow)
    {
        Helper = Str;
        while(*Helper!='\0')
        {
            printf("%c\t",*Helper);
            Helper++;
        }
        printf("\n");
        iCnt++;
    }
}