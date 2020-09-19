/*
    Problem Statement : Write a recursive program which accept number from user and return
                        smallest digit

                        Input : 87983
                        Output : 3
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = SmallDigit(iNo);

    printf("Smallest digit is : %d\n",iRet);

    return 0;
}