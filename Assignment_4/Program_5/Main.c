/*
    Problem Statemet : Accept one number from user and return the difference between the 
                       factors and non-factors of that number 
*/

/*
    ALGORITHM
        START
            Accept one number from user
            Create one Counter
            Create Variables as fact and non_fact
            Create one variables as ans
            iterate till counter <= number
                if number % counter == 0
                    then fact = fact + counter
                if number % counter != 0
                    then non_fact = non_fact + counter
                increament the counter by 1
                continue the iteration
            perform ans = fact - non_fact
            return the value of ans
        STOP
*/

#include "Header.h"

int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter one number\n");
    scanf("%d",&iNo);

    iRet = FactDiff(iNo);

    printf("Difference is : %d\n",iRet);
    
    return 0;
}