/*
    Problem Statement : Write a program which accept one number and position from user and
                        check whether bit at that position is on or off. If bit is one return TURE
                        otherwise return FALSE.

                        Input : 10 2
                        Output : TRUE
*/

#include "Header.h"

int main()
{
    UINT iNo = 0;
    int iPos = 0;
    BOOL bRet = OFF;

    printf("Enter a number\n");
    scanf("%d",&iNo);
    printf("Enter the position\n");
    scanf("%d",&iPos);

    bRet = ChkBit(iNo,iPos);

    if(bRet==ON)
    {
        printf("%dth Bit is ON\n",iPos);
    }
    else if(bRet==ERROR)
    {
        printf("Error : Invalid Input\n");
    }
    else
    {
        printf("%dth Bit is OFF\n",iPos);
    }

    return 0;
}