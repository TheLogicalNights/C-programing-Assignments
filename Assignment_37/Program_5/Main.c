/*
    Problem Statement : Write a program which accept string from user and replace each
                        occurrence of first character of each word into capital case.

                        Input : “marvellous infosystems by Piyush khairnar”
                        Output : “Marvellous Infosystems By Piyush Khairnar”
*/

#include "Header.h"

int main()
{
    char cStr[300];

    printf("Enter a String\n");
    scanf("%[^'\n']s",cStr);

    StrCap(cStr);

    printf("Modified String is : %s\n",cStr);

    return 0;
}