/*
    Problem Statement : Accept a number from user and display the factors of that number in reverse order
*/

/*
    ALGORITHM
        START
            Accept one number as no
            Create one counter as iCnt and initialize it at no/2
            iterate till iCnt >= 1 
                if no % iCnt == 0
                    then print iCnt
                Decrement the iCnt by 1
                Continue the iteration
        STOP
*/

#include "Header.h"

int main()
{
    int iNo = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    DisplayRevFactors(iNo);

    return 0;
}