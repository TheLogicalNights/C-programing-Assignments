/*
    Problem Statement : Write a program which accept two numbers from user and display position
                        of common ON bits from that two numbers.

                        Input : 10 15
                        Output : 2  4 (1010  1111)
*/

#include "Header.h"

int main()
{
    UINT iNo1 = 0;
    UINT iNo2 = 0;

    printf("Enter first number\n");
    scanf("%d",&iNo1);
    printf("Enter second number\n");
    scanf("%d",&iNo2);

    CommonBits(iNo1,iNo2);

    return 0;
}