/*
    Problem Statement : Write a program which accepts N from user and print all odd numbers up to N. 

                        Input :  18  
                        Output :  1  3  5  7  9  11  13  

*/

/*
    ALGORITHM
        START
            Accept one number from user as no
            if no < 0
                then perform no = -no
            Create one counter as iCnt and initialize it to 1
            iterate till iCnt <= no
            if iCnt % 2 != 0
                then print iCnt
            continue iteration
        STOP
*/

#include "Header.h"

int main()
{
    int iNo = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    DisplayOdd(iNo);
    
    return 0;
}