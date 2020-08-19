/*
    Problem Statement : Accept a number from user and return the difference between summation of even digits and summation of odd digits
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = CountDiff(iNo);

    printf("Multiplication is : %d\n",iRet);

    return 0;
}