/*
    Problem Statement : Accept character from user and display its ASCII value in decimal,
                        octal and hexadecimal format.
                        Input : A
                        Output : Decimal        65
                                 Octal          0101
                                 Hexadecima     l0X41
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