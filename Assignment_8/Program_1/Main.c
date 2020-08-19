/*
    Problem Statement : Write a program which accept number from user and if number is less than 50 
                        then print small , if it is greater than 50 and less than 100 then print medium, if it is 
                        greater than 100 then print large. 

                        Input : 75  
                        Output : Medium  

*/

/*
    ALGORITHM
        START
            Accept one number from user as no
            if no < 50
                then print small
            otherwise if no > 50 and no < 100
                then print medium
            otherwise if no > 100
                then print large
        STOP
*/

#include "Header.h"

int main()
{
    int iNo = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    Number(iNo);
    
    return 0;
}