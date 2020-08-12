/*
    Problem Statement : Accept one number from user and print that number of even numbers on screen
*/

/*
    ALGORITHM
        START
            Accept one number as no
            Create a counter iCnt and initialize it at 0
            Create a counter iItr for iteration and initialize it at 1
            Iterate till iCnt != no
                if iItr % 2 == 0 
                    then print iTte
                         incraement the iCnt by 1
                increament iItr by 1
                Continue the iteration
        STOP
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    
    printf("Enter a number\n");
    scanf("%d",&iNo);

    DisplayEven(iNo);

    return 0;
}