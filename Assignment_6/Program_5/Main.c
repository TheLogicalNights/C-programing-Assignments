/*
    Problem Statement : Accept one number from user and count frequency of such a digits which are less than 6
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = Count(iNo);

    printf("Frequency is : %d\n",iRet);

    return 0;
}