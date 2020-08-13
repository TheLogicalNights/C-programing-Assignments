/*
    Problem Statement : Write a program which accept name from user and print that name
*/

#include<stdio.h>

int main()
{
    char Name[30] = "\0";

    printf("Please Enter Your name\n");
    scanf("%s",&Name);

    printf("Your Name is : %s\n",Name);
    
    return 0;
}