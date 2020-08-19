/*
    Problem Statement : Accept a number from user and return the count of even digits
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = CountEven(iNo);

    printf("Count of Even digits is : %d\n",iRet);

    return 0;
}