/*
    Problem Statement : Write a program which accept string from user and accept one
                        character. Return index of last occurrence of that character.

                        Input :
                        “Marvellous Multi OS”
                        M

                        Output : 11
                        Input : “Marvellous Multi OS”
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

    printf("Enter a String\n");
    scanf("%[^'\n']s",cArr);
    printf("Enter a character\n");
    scanf(" %c",&cCh);

    iRet = LastChar(cArr,cCh);

    if(iRet==-2)
    {
        printf("Error : something went wrong please try again\n");
    }
    else if(iRet==-1)
    {
        printf("there is no such character\n");
    }
    else
    {
        printf("Index of last occurence is : %d\n",iRet);
    }

    return 0;
}