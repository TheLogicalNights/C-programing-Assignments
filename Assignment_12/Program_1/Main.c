/*
    Problem Statement : Write a program which accept number from user and display below pattern. 
                        
                        Input :  5  
                        Output :  * * * * * # # # # #   
                        
                        Input :  6 
                        Output :  * * * * * * # # # # # # #   
                        
                        Input :  -5  
                        Output :  * * * * * # # # # #   
                        
                        Input :  2 
                        Output :  * * # #   

*/

/*
    ALGORITHM
    START
        Accept one number from user
        Create one counter and initialize it to 1
        if number < 0
            then number = -number
        if number == 0
            then return 
        iterate till counter <= number*2
            if(counter<=5)
                then print *
            otherwise print #
            Increament the counter by 1
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