/*
    Problem Statement : Write a program which accept one number from user and on its first 4
                        bits. Return modified number.
                        
                        Input : 73
                        Output : 79
*/

#include "Header.h"

int main()
{
    UINT iNo = 0;
    UINT iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = OnBit(iNo);

    printf("Modified Number is : %d\n",iRet);

    return 0;
}