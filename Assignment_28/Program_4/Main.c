/*
    Problem Statement : Write a program which accept string from user and display only
                        digits from that string.

                        Input : “marve89llous121”
                        Output : 89121

                        Input : “Demo”
                        Output :
*/

#include "Header.h"

int main()
{
    char cArr[20];

    printf("Enter a String which contains alphabets as well as digits\n");
    scanf("%[^'\n']s",&cArr);

    DisplayDigit(cArr);

    return 0;
}