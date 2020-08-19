/*
    Problem Statement : Write a program which accept number from user and print numbers till that  
                        number. 
                        
                        Input :  8  
                        Output :  1  2  3  4  5  6  7  8  
*/

/*
    ALGORITHM
        START
            Accept one number from user as no
            Create one couner as iCnt and initialize it to 1
            iterate till iCnt <= no
                print iCnt
                increament the value of iCnt by 1
            continue the iteration 
        STOP
*/

#include "Header.h"

int main()
{
    int iNo = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    Display(iNo);
    
    return 0;
}