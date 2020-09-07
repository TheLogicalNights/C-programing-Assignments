/*
    Problem Statement : Write a program which accept string from user and reverse each
                        word in place.

                        Input : “Marvellous Multi OS”
                        Output : “suollevraM itluM SO”
*/

#include "Header.h"

int main()
{
    char cStr[30];

    printf("Enter a String\n");
    
    scanf("%[^'\n']s",cStr);

    StrWrdRev(cStr);

    printf("Modified String is : %s\n",cStr);

    return 0;
}