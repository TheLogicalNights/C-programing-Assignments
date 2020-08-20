/*
    Program Statement : Write a program which accept range from user and return addition of all even 
                        numbers in between that range. (Range should contains positive numbers only) 
                        
                        Input :  23 30  
                        Output :  108    
                        
                        Input :  10 18 
                        Output :  70 
                        
                        Input :  -10 2 
                        Output :  Invalid range 
                        
                        Input :  90 18 
                        Output :  Invalid range

*/

/*
    ALGORITHM
        START
            Accept the starting number of range as start
            Accept the ending number of the range as end
            Create one counter as iCnt and initialize it to start
            Create one Variable as Sum
            if start>end or start<0 or end<0
                then print Invalid Input
            otherwise
                iterate till iCnt <= end
                    if iCnt % 2 == 0
                        then perform Sum = Sum + iCnt
                    increament the value of iCnt
                continue the iteration
        STOP
*/

#include "Header.h"

int main()
{
    int iValue1=0,iValue2=0;
    int iRet = 0;

    printf("Enter the starting number of range\n");
    scanf("%d",&iValue1);
    printf("Enter the ending number of range\n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    if(flag==1)
    {
        printf("Addition is : %d",iRet);
    }
    else
    {
        printf("Invalid Input");
    }
    
    return 0;
}