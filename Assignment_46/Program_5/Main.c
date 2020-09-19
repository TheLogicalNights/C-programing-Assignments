/*
    Problem Statement : Write a recursive program which accept number from user and return its
                        product of digits.

                        Input : 523
                        Output : 30
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = Product(iNo);

    printf("Product of Digits is : %d\n",iRet);
    return 0;
}