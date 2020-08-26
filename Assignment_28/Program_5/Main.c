/*
    Problem Statement : Write a program which accept string from user and count number of
                        white spaces

                        Input : “MarvellouS”
                        Output : 0

                        Input : “MarvellouS Infosystems”
                        Output : 1

                        Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
                        Output : 5
*/

#include "Header.h"

int main()
{
    char cArr[20];
    int iRet = 0;

    printf("Enter a string\n");
    scanf("%[^'\n']s",&cArr);

    iRet = CountWhite(cArr);

    if(iRet==-1)
    {
        printf("Error : Something went wrong please try again.");
    }
    else
    {
        printf("Total number of white spaces are : %d\n",iRet);
    }
    return 0;
}