/* 
    Problem Statement : Write a program which returns difference between Even factorial and odd factorial 
                        of given number.  
                        
                        Input :  5  
                        Output :  -7   (8 - 15) 
                        
                        Input :  -5  
                        Output :  -7   (8 - 15) 
                        
                        Input :  10  
                        Output :  2895  (3840 - 945) 
*/

/*
    ALGORITHM
        START
            Accept one number as no
            Create one variable as factEven and initialize it to 1
            Create one variable as factOdd and initialize it to 1
            Create one Variable as Ans and initialize it to 0
            if no < 0
                then perform no = -no
            iterate till no !=0
                if no % 2 == 0
                    then perform factEven = factEven * no
                otherwise perform factOdd = factOdd * no
                decreament the value of no by 1
            continue the iteration
            perform Ans = factEven - factOdd
            return the value of Ans
        STOP
*/

#include "Header.h"

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = DifferenceFact(iValue);

    printf("Difference between factorial is : %d\n",iRet);
    
    return 0;
}