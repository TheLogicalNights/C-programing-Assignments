/*
    Problem Statement : Write a program which accept one number from user and toggle 7th bit of
                        that number. Return modified number.

                        Input : 137
                        Output : 201
*/

#include "Header.h"

int main()
{
    UINT iNo = 0;
    UINT iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = ToggleBit(iNo);

    printf("Modified Number is : %d\n",iRet);

    return 0;
}