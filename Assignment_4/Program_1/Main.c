/*
    Problem Statement : Accept one number from user and display multiplication of factor of that number
*/

/*
    ALGORITHM
        START
            Accept one number as no
            Create one counter as iCnt and initialize it at 1
            Create one variable as ans and initialize it at 1
            iterate till iCnt <= no/2
                if no % iCnt == 0
                    then perform ans = ans * iCnt
                increament the iCnt by 1
                continue the iteration
            Return the value of ans
        STOP
*/
#include "Header.h"
int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = MultiplicationOfFactors(iNo);

    printf("Multiplication is : %d",iRet);

    return 0;
}