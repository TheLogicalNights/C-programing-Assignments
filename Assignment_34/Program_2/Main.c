/*
    Problem Statement : Write a program which accept one number and position from user and off
                        that bit. Return modified number.

                        Input : 10 8
                        Output : 2
*/

#include "Header.h"

int main()
{
    UINT iNo = 0;
    int iRet = 0,iPos=0;

    printf("Enter a number\n");
    scanf("%d",&iNo);
    printf("Enter the position\n");
    scanf("%d",&iPos);

    iRet = OffBit(iNo,iPos);

    printf("Modified number is : %d\n",iRet);

    return 0;
}