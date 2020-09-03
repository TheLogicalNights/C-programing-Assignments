/*
    Problem Statement : Write a program which checks whether 7th & 15th & 21st , 28th bit
                        is On or OFF.
*/

#include "Header.h"

int main()
{
    UINT iNo = 0;
    BOOL bRet = OFF;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    bRet = ChkBit(iNo);

    if(bRet==ON)
    {
        printf("7th,5th,21th and 28th bit of %d is ON\n",iNo);
    }
    else
    {
        printf("7th,5th,21th and 28th bit of %d is OFF\n",iNo);
    }

    return 0;
}