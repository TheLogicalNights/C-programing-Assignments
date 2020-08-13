/*
    Problem Statement : Accept a number from user and check Whether it contains 0 or not
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    BOOL iRet = FALSE;
    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = ChkZero(iNo);

    if(iRet==TRUE)
    {
        printf("It contains zero\n");
    }
    else
    {
        printf("There is not zero");
    }
    
    return 0;
}