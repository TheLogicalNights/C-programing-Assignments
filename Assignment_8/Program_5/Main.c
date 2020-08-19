/*
    Problem Statement : Write a program which accept number from user and display its table in reverse 
                        order.  

                        Input :  2 
                        Output :  20 18 16 14 12 10 8 6 4 2 

                        Input :  5 
                        Output :  50 45 40 35 30 25 20 15 10 5 
    
                        Input :  -5 
                        Output :  50 45 40 35 30 25 20 15 10 5 

*/

/*
    ALGORITHM
        START
            Accept one number as no
            Create one counter as iCnt and initialize it to 10
            if no < 0
                then perform no = -no
            iterate till iCnt >= 1
                print no * iCnt
                decreament the value of iCnt by 1
            continue iteration
        STOP
*/

#include "Header.h"

int main()
{
    int iNo = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    TableRev(iNo);
    
    return 0;
}