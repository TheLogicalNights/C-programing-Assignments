/*
    Problem Statement : Write a program to find factorial of given number.  
                        
                        Input :  5  
                        Output :  120   (5 * 4 * 3 * 2 * 1) 

                        Input :  -5  
                        Output :  120   (5 * 4 * 3 * 2 * 1) 

                        Input :  4  
                        Output :  24   (4 * 3 * 2 * 1)

*/

/*
    ALGORITHM
        START
            Accept one number from user as no
            Create one variable as iFact and initialize it to 1
            if no < 0
                then no = -no
            iterate till no != 1
                perform iFact = iFact * no
                decreament the value of no by 1
            continue 
            return the value of iFact
        STOP
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = Factorial(iNo);

    printf("Factorial is : %d",iRet);

    return 0;
}