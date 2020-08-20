/*
    Problem Statement : Write a program which accept range from user and display all numbers in between 
                        that range. 
                        
                        Input :  23 35  
                        Output :  23 24 25 26 27 28 29 30 31 32 33 34 35   
                        
                        Input :  10 18 
                        Output :  10 11 12 13 14 15 16 17 18 
                        
                        Input :  10 10 
                        Output :  10  
                        
                        Input :  -10 2 
                        Output :  -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2 
                        
                        Input :  90 18 
                        Output :  Invalid range

*/

/*
    ALGORITHM
        START
            Accept starting number of range from user as iStart
            Accept Endind number of range from user as iEnd
            Create one counter as iCnt and initialize it to iStart
            if iStart > iEnd
                then print Invalid Range
            iterate till iCnt <= iEnd
                print iCnt
                increament the value of counter
            continue the iteration
        STOP
*/

#include "Header.h"

int main()
{
    int iNo1 = 0, iNo2 = 0;

    printf("Enter starting of range\n");
    scanf("%d",&iNo1);
    printf("Enter the ending of range\n");
    scanf("%d",&iNo2);

    DisplayRange(iNo1,iNo2);
    
    return 0;
}