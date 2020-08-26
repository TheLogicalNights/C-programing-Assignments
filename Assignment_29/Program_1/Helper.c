///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkChar
// Parameters    : String , Character
// Return Value  : BOOLEAN
// Description   : it takes one string and character as input and check whether that character is present in string or not
// Author        : Swapnil Ramesh Adhav
// Date          : 25th August 2020 
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkChar(char *str,char ch)
{
    int iFlag = 0;
    if(str==NULL)
    {
        return ERROR;
    }
    while(*str!='\0')
    {
        if(*str==ch)
        {
            iFlag=1;
            break;
        }
        str++;
    }
    if(iFlag==1)
    {
        return TRUE;    
    }
    else
    {
        return FALSE;
    }
}