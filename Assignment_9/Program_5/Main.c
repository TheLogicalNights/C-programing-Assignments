/*
    Problem Statement : Write a program which accept N and print first 5 multiples of N.  

                        Input :  4  
                        Output :  4  8  12  16  20  

*/

/*
    ALGORITHM
    START
        Accept one number from user as no
        if no < 0
            then perform no = -no
        Create one Counter as iCnt and initialize it to 1
        iterate till iCnt <= 5
            print no * iCnt
        continue iteration
    STOP
*/
#include "Header.h"

int main()
{
    int iNo = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    DisplayMultiples(iNo);
    
    return 0;
}