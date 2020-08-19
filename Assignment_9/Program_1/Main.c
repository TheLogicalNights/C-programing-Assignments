/*
    Problem Statement : Write a program which accept number from user and print that number of $ & * 
                        on screen.  

                        Input :  5 
                        Output :  $ * $ * $ * $ * $ * 

                        Input :  3 
                        Output :  $ * $ * $ *   

                        Input :  -3 
                        Output :  $ * $ * $ *  
*/

/*
    ALGORITHM
        START
            Accept one number from user as no
            Create one counter as iCnt and initialize it to 1
            if no < 0
                then perform no = -no
            iterate till iCnt <= no
                print $ *
                increament the value of iCnt by 1
            continue iteration
        STOP
*/

#include "Header.h"

int main()
{
    int iNo = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    Pattern(iNo);
    
    return 0;
}