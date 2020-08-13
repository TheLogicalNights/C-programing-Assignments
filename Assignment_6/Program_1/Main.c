/*
    Problem Statement : Accept one number from user and display digits in reverse order
*/

#include "Header.h"

int main()
{
    int iNo = 0;

    printf("Enter one number\n");
    scanf("%d",&iNo);

    DispplayDigits(iNo);
    
    return 0;
}