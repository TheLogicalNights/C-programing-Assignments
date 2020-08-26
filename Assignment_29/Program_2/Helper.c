///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Frequency
// Parameters    : String, Character 
// Return Value  : Integer
// Description   : it takes String and character as input and count the frequency of that character in the string
// Author        : Swapnil Ramesh Adhav
// Date          : 25th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int Frequency(char *cStr,char ch)
{
    int iCnt=0;

    if(cStr==NULL)
    {
        return -1;
    }
    while(*cStr!='\0')
    {
        if(*cStr==ch)
        {
            iCnt++;
        }
        cStr++;
    }

    return iCnt;
}