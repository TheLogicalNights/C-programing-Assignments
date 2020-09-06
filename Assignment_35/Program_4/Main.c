/*
    Problem Statement : Write a program which accept one number , two positions from user and
                        check whether bit at first or bit at second position is ON or OFF.

                        Input : 10   3  7
                        Output : TRUE
*/

#include "Header.h"

int main()
{
    UINT iNo = 0;
    int iPos1 = 0;
    int iPos2 = 0;
    BOOL bRet = FALSE;

    printf("Enter a number\n");
    scanf("%d",&iNo);
    printf("Enter first position :");
    scanf("%d",&iPos1);
    printf("Enter second position :");
    scanf("%d",&iPos2);

    bRet = ChkBit(iNo,iPos1,iPos2);

    if(bRet==TRUE)
    {
        printf("One of the bit is ON\n");
    }
    else
    {
        printf("Both the bits are OFF\n");
    }

    return 0;
}