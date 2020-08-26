/*
    Problem Statement : Write a program which accept string from user and accept one
                        character. Return frequency of that character.

                        Input :
                        “Marvellous Multi OS”
                        M
                        Output : 2

                        Input : “Marvellous Multi OS”
                        W
                        Output :
                        0
*/

#include "Header.h"

int main()
{
    char cArr[30];
    char cCh = '\0';
    int iRet = 0;

    printf("Enter a String\n");
    scanf("%[^'\n']s",cArr);

    printf("Enter a character\n");
    scanf(" %c",&cCh);

    iRet = Frequency(cArr,cCh);

    if(iRet==-1)
    {
        printf("Error : Something went wrong please try again\n");
    }
    else
    {
        printf("Frequency of character is : %d\n",iRet);
    }

    return 0;
}