/*
    Problem Statement : Write a program to find even factorial of given number.  
                        
                        Input :  5  
                        Output :  8   (4 * 2) 
                        
                        Input :  -5  
                        Output :  8   (4 * 2) 
                        
                        Input :  10  
                        Output :  3840  (10 * 8 * 6 * 4 * 2) 

*/

/*
    ALGORITHM
        START
            Accept one number as no
            Create one variable as fact and initialize it to 1
            if no < 0
                then perform no = -no
            iterate till no !=0
                if no % 2 == 0
                    then perform fact = fact * no
                decreament the value of no by 1
            continue the iteration
            return the value of fact
        STOP
*/

#include "Header.h"

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = EvenFact(iValue);

    printf("Even factorial is : %d\n",iRet);
    
    return 0;
}