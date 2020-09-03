/*
    Problem Statement : Write a program which checks whether 15th bit is On or OFF.
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
        printf("15th bit of %d is ON\n",iNo);
    }
    else
    {
        printf("15th bit of %d is OFF\n",iNo);
    }
    return 0;
}