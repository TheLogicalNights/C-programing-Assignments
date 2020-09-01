/*
    Problem Statement : Write a program which accept string from user and copy that
                        characters of that string into another string by removing all white
                        spaces.
                        Input  : “Mlous Pyth on”
                        Output : “MarvellousPython”
*/

#include "Header.h"

int  main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter a String\n");
    scanf("%[^'\n']s",Arr);

    StrCpyXX(Arr,Brr);

    printf("Modified String is : %s\n",Brr);

    return 0;
}