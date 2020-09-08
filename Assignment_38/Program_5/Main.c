/*
    Problem Statement : Write a program which accept string from user and print below
                        pattern.

                        Input : “Marvellous” 
                        Output : m a r v e l l o u s
                                 m a r v e l l o u s
                                 m a r v e l l o u s
                                 m a r v e l l o u s
                                 m a r v e l l o u s
                                 m a r v e l l o u s
                                 m a r v e l l o u s
                                 m a r v e l l o u s
                                 m a r v e l l o u s
                                 m a r v e l l o u s

                        Input : “PPA”
                        Output : p p a
                                 p p a
                                 p p a
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