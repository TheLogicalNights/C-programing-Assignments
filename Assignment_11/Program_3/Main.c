/*
    Problem Statement : Write a program which accept range from user and return addition of all numbers 
                        in between that range. (Range should contains positive numbers only) 
                        
                        Input :  23 30  
                        Output :  212    
                        
                        Input :  10 18 
                        Output :  126 
                        
                        Input :  -10 2 
                        Output :  Invalid range 
                        
                        Input :  90 18 
                        Output :  Invalid range 

*/

/*
    ALGORITHM
        START
            Accept starting number of range as start
            Accept ending number of range as end
            if start > end or start < 0 or end < 0
                then print Invalid Input
            Create a counter as iCnt and initialize it to start
            Create one variable as sum and initialize to 1
            iterate till iCnt <= End 
                perform opearation sum = sum + iCnt
                increament the value of iCnt
            continue the iteration
            return the value of sum
        STOP
*/
#include "Header.h"

int main()
{
    int iValue1=0,iValue2=0;
    int iRet=0;

    printf("Enter starting number of range\n");
    scanf("%d",&iValue1);
    printf("Enter ending number of range\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    if(flag==1)
    {
        printf("The sum is : %d",iRet);
    }
    else
    {
        printf("Invalid Input");
    }
    
    return 0;
}