/*
    Problem Statement : Accept one number from user and print that number of * on the screen
*/
#include "Header.h"
int main()
{
    int iNo = 0;
    
    printf("Enter a number...\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}