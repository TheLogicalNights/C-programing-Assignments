/*
    Problem Statement : Write a program which accept accept range from user and display all numbers in 
                        between that range in reverse order. 
                        
                        Input :  23 35  
                        Output :  35 34 33 32 31 30 29 28 27 26 25 24 23   
                        
                        Input :  10 18 
                        Output :  18 17 16 15 14 13 12 11 10 
                        
                        Input :  10 10 
                        Output :  10  
                        
                        Input :  -10 2 
                        Output :  2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10 
                        
                        Input :  90 18 
                        Output :  Invalid range

*/

/*
    ALGORITHM
        START
            Accept the starting number of range as start
            Accept the ending number if range as end
            Create one counter as iCnt and initialize it to end
            if start > end 
                then print invalid input
            otherwise
                iterate till iCnt >= start
                    print iCnt
                    decrement the value of counter by 1
                continue the iteration
        STOP
*/

#include "Header.h"

int main()
{
    int iValue1=0,iValue2=0;
    
    printf("Enter the starting number of range\n");
    scanf("%d",&iValue1);
    printf("Enter the ending number of range\n");
    scanf("%d",&iValue2);

    DisplayRangeRev(iValue1,iValue2);
    
    return 0;
}