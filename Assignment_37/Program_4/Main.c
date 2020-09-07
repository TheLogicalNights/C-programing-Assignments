/*
    Problem Statement : Write a program which accept string from user and copy the
                        contents into another string by removing extra white spaces.

                        Input : “Marvellous    multi    OS”
                        Output : “Marvellous multi OS”

*/

#include "Header.h"

int main()
{
    char cStr[30];
    char cDest[30];

    printf("Enter a String\n");
    scanf("%[^'\n']s",cStr);

    StrCpyX(cStr,cDest);

    printf("Modified String is : %s\n",cDest);

    return 0;
}