/*
    Problem Statement : Write a recursive program which accept number from user and return its
                        factorial.

                        Input : 5
                        Output : 120
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = Fact(iNo);

    printf("Factorial is : %d\n",iRet);

    return 0;
}