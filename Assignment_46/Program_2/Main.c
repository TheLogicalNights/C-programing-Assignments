/*
    Problem Statement : Write a recursive program which accept number from user and return
                        summation of its digits.

                        Input : 879
                        Output : 24

*/

#include "Header.h"

int main()
{
    int iNo = 0;
    int iRet = 0;   
    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = SumOfDigits(iNo);
    
    printf("The sun of digits is : %d\n",iRet);
    
    return 0;
}