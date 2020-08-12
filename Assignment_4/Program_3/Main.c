/*
    Problem Statement : Accept one number from user and print non factors of that number
*/

/*
    ALGORITHM
        START
            Accept one number from user 
            Create a counter 
            iterate till counter < number
            if number % counter != 0
                then print counter
                increament the counter
                continue the iteration
        STOP
*/

#include "Header.h"

int main()
{
    int iNo = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    DisplayNonFactors(iNo);
    
    return 0;
}