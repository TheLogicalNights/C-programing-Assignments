/*
    Problem Statement : Write a program which accept one number from user and check whether
                        9th or 12th bit is on or off.
                        
                        Input : 257
                        Output : TRUE
*/

#include "Header.h"

int main()
{
    UINT iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    bRet = ChkBit(iNo);

    if(bRet==TRUE)
    {
        printf("9th or 12th or both the bits are ON\n");
    }
    else
    {
        printf("Both the bits are OFF\n");
    }
    
    return 0;
}