/*
    Problem Statement : Write a program which checks whether first and last bit is On or
                        OFF. First bit means bit number 1 and last bit means bit number 32.
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
        printf("first and last bits of %d are ON\n",iNo);
    }
    else
    {
        printf("first and last bits of %d are OFF\n",iNo);
    }

    return 0;
}