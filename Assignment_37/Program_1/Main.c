/*
    Problem Statement : Write a program which accept string from user count number of
                        words from string
    
                        Input : “Marvellous Multi OS”
                        Output : 3

                        Input : “ Marvellous Multi      OS Pune”
                        Output : 4
*/

#include "Header.h"

int main()
{
    char cStr[30];
    int iRet = 0;

    printf("Enter a String\n");
    scanf("%[^'\n']s",cStr);

    iRet = WordCount(cStr);

    if(iRet==-1)
    {
        printf("Error : Something went wrong please try again..\n");
        return -1;
    }
    else
    {
        printf("Word Count is : %d\n",iRet);
    }
    return 0;
}