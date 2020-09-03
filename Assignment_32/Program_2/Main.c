/*
    Problem Statement : Write a program which checks whether 5th & 18th bit is On or OFF.
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
        printf("5th and 18th Bit of %d is ON\n",iNo);
    }
    else
    {
        printf("5th and 18th Bit of %d is OFF\n",iNo);
    }
    return 0;
}