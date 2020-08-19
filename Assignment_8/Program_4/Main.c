/*
    Problem Statement : Write a program which accept number from user and display its table.  

                        Input :  2 
                        Output :  2 4 6 8 10 12 14 16 18 20 

                        Input :  5 
                        Output :  5 10 15 20 25 30 35 40 45 50 

                        Input :  -5 
                        Output :  5 10 15 20 25 30 35 40 45 50 

*/

/*
    ALGORITHM
        START
            Accept number from user as no
            Create one counter as iCnt and initialize it at 0
            if no < 0
                then perform no = -no
            iterate till iCnt <= 10
                print no * iCnt
                increament the iCnt by 1
            continue the iteration
        STOP
*/

#include "Header.h"

int main()
{
    int iNo = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    Table(iNo);
        
    return 0;
}