/*
    Problem Statement : Write a program which accept string from user and return
                        difference between frequency of small characters and frequency of
                        capital characters.

                        Input : “MarvellouS”
                        Output : 6 (8-2)
*/

#include "Header.h"

int main()
{
    char cValue[20];
    BOOL bRet = FALSE;
    int iDifference = 0;

    printf("Enter a string");
    scanf("%[^'\n']s",&cValue);

    iRet = Difference(cValue,&iDifference);

    if(bRet==TRUE)
    {
        printf("The Difference is : %d\n",iDifference);
    }
    else
    {
        printf("Error : Something went wrong please try again.\n");
    }
    return 0;
}
