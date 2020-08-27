/*
    Problem Statement : Write a program which accept string from user and copy capital
                        characters of that string into another string.

                        Input : “Marvellous Multi OS”
                        Output : “MMOS”
*/

#include "Header.h"

int main()
{
    char cSource[30];
    char cDestination[30];

    printf("Enter Source String\n");
    scanf("%[^'\n']s",cSource);

    StrCpyCap(cSource,cDestination);

    printf("Destination String is : %s\n",cDestination);

    return 0;
}