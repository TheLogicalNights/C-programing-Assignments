/*
    Problem Statement : Accept one character from user and convert the case of character 
*/

#include "Header.h"

int main()
{
    char cChar = '\0';

    printf("Enter one character\n");
    scanf("%c",&cChar);

    DisplayConvert(cChar);

    return 0;
}