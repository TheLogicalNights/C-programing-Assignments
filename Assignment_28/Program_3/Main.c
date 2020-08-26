/*
    Problem Statement : Write a program which accept string from user and toggle the case.

                        Input : “Marvellous Multi OS”
                        Output : mARVELLOUS mULTI os
*/

#include "Header.h"

int main()
{
    char cValue[20];

    printf("Enter a string\n");
    scanf("%[^'\n']s",&cValue);

    strtogglex(cValue);

    printf("Modofied String is : %s\n",cValue);
    
    return 0;
}