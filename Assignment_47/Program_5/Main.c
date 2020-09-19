/*
    Problem Statement : Write a recursive program which accept number from user and return its
                        reverse number.

                        Input : 523
                        Output : 325
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = Reverse(iNo);

    printf("Reverse number is : %d\n",iRet);
 
    return 0;
}