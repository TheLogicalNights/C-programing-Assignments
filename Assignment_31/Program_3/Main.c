/*
    Problem Statement : Write a program which accept string from user and copy that
                        characters of that string into another string by converting all small
                        characters into capital case.

                        Input : “Marvellous Python 2”
                        Output : “MARVELLOUS PYTHON 2”
*/

#include "Header.h"

int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter a string\n");
    scanf("%[^'\n']s",Arr);

    StrCpyXXX(Arr,Brr);

    printf("Modified String is : %s\n",Brr);

    return 0;
}