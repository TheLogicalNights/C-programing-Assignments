/*
    Problem Statement : Write a program which accept string from user and display it inn
                        reverse order.

                        Input : “MarvellouS”
                        Output : “SuollevraM”
*/

#include "Header.h"

int main()
{
    char cValue[20];

    printf("Enter a String\n");
    scanf("%[^'\n']s",&cValue);

    DisplayReverse(cValue);
    
    return 0;
}