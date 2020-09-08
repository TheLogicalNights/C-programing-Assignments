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
    int iRow=0;
    int i = 0,j = 0;
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

    for(i=1;i<=iRow;i++)
    {
        Helper = Str;
        for(j=1;j<=i;j++)
        {
            printf("%c\t",*Helper);
            Helper++;
        }
        printf("\n");
    }
}