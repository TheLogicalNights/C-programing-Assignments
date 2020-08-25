///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Parameters    : Char
// Return Value  : None 
// Description   : it take one character as input and if character is capital then it will display all the characters from the
//                 input characters till Z and character is small then it will then print all the characters in reverse order till a
// Author        : Swapnil Ramesh Adhav
// Date          : 21th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Display(char cValue)
{
    int iCnt = 0;
    if(cValue>=65 && cValue<=90)
    {
        for(iCnt=cValue;iCnt<=90;iCnt++)
        {
            printf("%c\t",iCnt);
        }
        printf("\n");
    }
    else if(cValue>=97 && cValue<=122)
    {
        for(iCnt=cValue;iCnt>=97;iCnt--)
        {
                printf("%c\t",iCnt);
        }
        printf("\n");
    }
    else
    {
            printf("Its not alphabet\n");
    }
}