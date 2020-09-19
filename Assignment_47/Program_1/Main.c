/*
    Problem Statement : Write a recursive program which accept string from user and count white
                        spaces.

                        Input : HE llo WOr lD
                        Output : 3

*/

#include "Header.h"

int main()
{
    char cStr[30] = {'\0'};
    int iRet = 0;

    printf("Enter a string\n");
    scanf(" %[^'\n']s",cStr);

    iRet = Count(cStr);

    printf("Number of white spaces are : %d\n",iRet);

    return 0;
}
