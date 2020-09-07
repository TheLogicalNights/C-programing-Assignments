/*
    Problem Statement : Write a program which accept string from user and return length of
                        largest word.

                        Input : “Marvellous Multi OS Infosystems”
                        Output : 11
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
        printf("Length of largest word is  %d\n",iRet);
    }
    
    return 0;
}