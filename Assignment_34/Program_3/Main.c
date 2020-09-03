/*
    Problem Statement : Write a program which accept one number and position from user and on
                        that bit. Return modified number.

                        Input : 10 3
                        
                        Output : 14
*/

#include "Header.h"

int main()
{
    UINT iNo = 0;
    int iPos = 0;
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);
    printf("Enter the position\n");
    scanf("%d",&iPos);

    iRet = OnBit(iNo,iPos);

    printf("Modified number is : %d\n",iRet);

    return 0;
}