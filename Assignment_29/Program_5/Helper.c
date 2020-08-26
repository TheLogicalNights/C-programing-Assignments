///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrRevX 
// Parameters    : String
// Return Value  : None
// Description   : it takes one string as input and reverse it
// Author        : Swapnil Ramesh Adhav
// Date          : 25th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void StrRevX(char str[])
{
    int iStart = 0;
    int iEnd = 0;
    char temp = '\0';
    if(str==NULL)
    {
        return;                                                                 
    }

    while(str[iEnd]!='\0')
    {
        iEnd++;
    }
    iEnd--;
    while(iStart<=iEnd)
    {
        if(iStart==iEnd)
        {
            str[iStart]==str[iEnd];
            break;
        }
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;
        iStart++;
        iEnd--;
    }
}