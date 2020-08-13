/*
    Problem Statement : Accept one number from user and count frequency of 2 in it
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = CountTwo(iNo);

    printf("Frequency of 2 is : %d\n",iRet);

    return 0;
}