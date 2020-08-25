/*
    Problem Statement : Accept character from user. If character is small display its
                        corresponding capital character, and if it small then display its
                        corresponding capital. In other cases display as it is.
                        
                        Input : Q
                        Output : q
                        
                        Input : m
                        Output : M
                        
                        Input : 4
                        Output : 4
                        
                        Input : %
                        Output : %
*/

#include "Header.h"

int main()
{
    char cValue = '\0';

    printf("Enter a character\n");
    scanf("%c",&cValue);

    Display(cValue);
    
    return 0;
}