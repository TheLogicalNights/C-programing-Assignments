/*
    Problem Statement : Write a program which accept one number from user and count number of
                        ON (1) bits in it without using % and / operator.

                        Input : 11
                        Output : 3
*/

#include "Header.h"

int main()
{
    UINT iNo = 0;
    UINT iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = CountOne(iNo);

    printf("Count of one is : %u\n",iRet);

    return 0;
}