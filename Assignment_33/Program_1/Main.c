/*
    Problem Statement : Write a program which accept one number from user and off 7th bit of that
                        number if it is on. Return modified number.

                        Input : 79
                        Output : 15
*/

#include "Header.h"

int main()
{
    UINT iNo = 0;
    UINT iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = OffBit(iNo);

    printf("Modified Number is : %d\n",iRet);
    return 0;
}