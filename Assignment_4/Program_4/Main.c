/*
    Problem Statement : Accept one number from user and return the summation of non factors of that number
*/

/*
    ALGORITHM
    START
        Accept one number from user
        Create one counter
        Create one variable as ans
        iterate till counter < number
            if number % counter != 0
                then ans = ans + counter
            increament the counter
            continue the iteration
    STOP
*/

#include "Header.h"

int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter one number\n");
    scanf("%d",&iNo);

    iRet = SumOfNonFactors(iNo);

    printf("Addition is : %d\n",iRet);

    return 0;
}