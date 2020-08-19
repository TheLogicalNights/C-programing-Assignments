/*
    Problem Statement : Write a program which accept number from user and print its numbers line. 

                        Input :  4  
                        Output :  -4  -3  -2  -1  0  1  2  3  4 

*/

/*
    ALGORITHM
        START
            Accept one number from user as no
            if no < 0
                then perform no = -no
            Create one counter as iCnt and initialize it to -no
            iterate till iCnt <= no
                print iCnt
            continue iteration 
        STOP
*/

#include "Header.h"

int main()
{
    int iNo = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    DisplayNUmberLine(iNo);
    
    return 0;
}