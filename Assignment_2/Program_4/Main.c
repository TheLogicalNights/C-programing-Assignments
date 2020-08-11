/*
    Problem Statement : Accept two numbers from user and display first number in second number of times
*/
#include "Header.h"
int main()
{
    int iNo1 = 0, iNo2 = 0;

    printf("Enter first number..\n");
    scanf("%d",&iNo1);

    printf("Enter second number..\n");
    scanf("%d",&iNo2);

    Display(iNo1, iNo2);

    return 0;
}