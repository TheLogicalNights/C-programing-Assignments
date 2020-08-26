/*
    Problem Statement : Write a program which accept string from user and convert it into
                        lower case.

                        Input : “Marvellous Multi OS”
                        Output : marvellous multi os
*/

#include "Header.h"

int main()
{
    char cValue[20];

    printf("Enter a String\n");
    scanf("%[^'\n']s",&cValue);

    strlwrx(cValue);

    printf("Modified String is %s\n",cValue);
    return 0;
}