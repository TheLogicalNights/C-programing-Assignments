/*
    Problem Statement : Accept one number from user and print even factors of that number
*/

/*
    ALGORITHM
        START
            Accept one number as no
            Create a counter as iCnt and initialize it at 1
            Iterate till iCnt <= no/2
                if no % iCnt == 0
                    then if iCnt % 2 == 0
                            then print iCnt
                Increament the iCnt by 1
                Continue the iteration
        STOP
*/
#include "Header.h"

int main()
{
    int iNo = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    DisplayEvenFactors(iNo);
    
    return 0;
}