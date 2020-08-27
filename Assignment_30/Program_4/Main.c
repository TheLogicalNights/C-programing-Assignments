/*
    Problem Statement : Write a program which accept string from user and copy small
                        characters of that string into another string.

                        Input : “Marvellous multi OS”
                        Output : “arvellous multi”
*/

#include "Header.h"

int main()
{
    char cSource[30];
    char cDestination[30];

    printf("Enter Source String\n");
    scanf("%[^'\n']s",cSource);
    
    StrCpySmall(cSource,cDestination);

    printf("Destination String is : %s\n",cDestination);

    return 0;
}