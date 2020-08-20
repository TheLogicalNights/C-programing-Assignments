/*
    Problem Statement : Write a program which accept range from user and display all even numbers in 
                        between that range. 
                        
                        Input :  23 35  
                        Output :  24 26 28 30 32 34    
                        
                        Input :  10 18 
                        Output :  10 12 14 16 18 
                        
                        Input :  10 10 
                        Output :  10  
                        
                        Input :  -10 2 
                        Output :  -10 -8 -6 -4 -2 0 2 
                        
                        Input :  90 18 
                        Output :  Invalid range

*/

/*
    ALGORITHM
        START
            Accept starting number of range as start
            Accept ending number of range as end
            Create one counter as iCnt and initialize it to start
            if start > end
                then print Invalid range
            iterate till iCnt <= end
                if iCnt % 2 == 0
                    then print iCnt
                increament the value of iCnt by 1
            continue the iteration
        STOP
*/

#include "Header.h"

int main()
{
    int iValue1=0, iValue2=0;

    printf("Enter starting number of range\n");
    scanf("%d",&iValue1);
    printf("Enter ending number of range\n");
    scanf("%d",&iValue2);

    DisplayRangeEven(iValue1,iValue2);
    
    return 0;
}