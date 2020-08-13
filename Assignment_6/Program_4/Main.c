/*
    Problem Statement : Accept one number from user and count frequency of 4 in it
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = CountFour(iNo);

    printf("Frequency of 4 is : %d\n",iRet);

    return 0;
}