/*
    Problem Statement : Write a program which accept string from user and print below
                        pattern.

                        Input : “Marvellous” 
                        Output : M A R V E L L O U S
                                 M A R V E L L O U S
                                 M A R V E L L O U S
                                 M A R V E L L O U S
                                 M A R V E L L O U S
                                 M A R V E L L O U S
                                 M A R V E L L O U S
                                 M A R V E L L O U S
                                 M A R V E L L O U S
                                 M A R V E L L O U S

                        Input : “PPA”
                        Output : P P A
                                 P P A
                                 P P A

*/

#include "Header.h"

int main()
{
    char cStr[30];

    printf("Enter a String\n");
    scanf("%[^'\n']s",cStr);

    Pattern(cStr);
    
    return 0;
}