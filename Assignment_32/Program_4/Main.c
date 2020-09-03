/*
    Problem Statement : Write a program which checks whether 7th & 8th & 9th bit is On or
                        OFF.
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
        printf("7th,8th and 9th bits of %d are ON\n",iNo);
    }
    else
    {
        printf("7th,8th and 9th bits of %d are OFF\n",iNo);
    }
    
    return 0;
}