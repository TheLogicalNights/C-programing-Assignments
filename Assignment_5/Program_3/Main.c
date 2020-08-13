/*
    Problem Statement : Accept two numbers from user and check whether numbers are equal or not
*/

/*
    ALGORITHM
        START
            Accept first number as no1
            Accept second number as no2
            if no1 == no2
                then return TRUE
            otherwise return FALSE
        STOP
*/

#include "Header.h"

int main()
{
    int iNo1 = 0, iNo2 = 0;
    BOOL iRet = FALSE;

    printf("Enter first number\n");
    scanf("%d",&iNo1);

    printf("Enter second number\n");
    scanf("%d",&iNo2);

    iRet = ChkEqual(iNo1,iNo2);

    if(iRet==TRUE)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return 0;
}