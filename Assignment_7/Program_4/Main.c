/*
    Problem Statement : Accept a number from user and return the count of digits between 3 and 7
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = MultDigits(iNo);

    printf("Multiplication is : %d\n",iRet);

    return 0;
}