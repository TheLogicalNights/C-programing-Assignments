/*
    Problem Statement : Write a program which accept string from user and copy that
                        characters of that string into another string by converting all capital
                        characters into small case.

                        Input : “Marvellous Python 2”
                        Output : “marvellous python 2”
*/

#include "Header.h"

int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter a String\n");
    scanf("%[^'\n']s",Arr);

    StrCpyXXXX(Arr,Brr);

    printf("Modified String is : %s\n",Brr);
    
    return 0;
}