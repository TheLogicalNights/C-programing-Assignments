/*
    Problem Statement : Write a program which accept string from user reverse that string
                        in place.
                        Input : “abcd”
                        Output : “dcba”

                        Input : “abba”
                        Output : “abba”
*/

#include "Header.h"

int main()
{
    char cArr[30];

    printf("Enter a String\n");
    scanf("%[^'\n']s",cArr);

    StrRevX(cArr);

    printf("Reversed String is : %s\n",cArr);

    return 0;
}