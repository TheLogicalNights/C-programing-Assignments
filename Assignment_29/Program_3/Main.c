/*
    Problem Statement : Write a program which accept string from user and accept one
                        character. Return index of first occurrence of that character.

                        Input :
                        “Marvellous Multi OS”
                        M
                        Output :
                        0

                        Input :
                        “Marvellous Multi OS”
                        W
                        Output : -1

                        Input : “Marvellous Multi OS”
                        e
                        Output :
                        4
*/

#include "Header.h"

int main()
{
    char cArr[30];
    char cCh = '\0';
    int iRet = 0;

    printf("Enter a string\n");
    scanf("%[^'\n']s",cArr);

    printf("Enter a character\n");
    scanf(" %c",&cCh);

    iRet = FirstChar(cArr,cCh);

    if(iRet==-2)
    {
        printf("Error : Something went wrong please try again\n");
    }
    else if(iRet==-1)
    {
        printf("there is no such character in the string\n");
    }
    else
    {
        printf("Index of first occurence of character is : %d\n",iRet);
    }

    return 0;
}