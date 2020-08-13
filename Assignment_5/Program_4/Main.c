/*
    Problem Statement : Write a program which accept three numbers from user and print its multiplication.
    input : 5   4   7
    output : 140

    input : 5   0   7
    output : 35

    input : 5   0   0
    output : 5

    input : 0   0   0
    output : 0
*/

/*
    ALGORITHM
        START
            Accept first number as no1
            Accept second number as no2
            Accept third number as no3
            Create one variable as ans
            if no1==0
                then perform ans = no2 * no3
            if no2==0
                then perform ans = no1 * no3
            if no3==0
                then perform ans = no1 * no2
            if no1==0 and no2==0
                then return no3
            if no1==0 and no3==0
                then return no2
            if no2==0 and no3==0
                return no1
            if no1!=0 and no2!=0 and no3!=0
                then perfrom ans = no1*no2*no3
            
        STOP
*/

#include "Header.h"

int main()  
{
    int iNo1 = 0, iNo2 = 0,iNo3 = 0;
    int iRet = 0;

    printf("Enter first number\n");
    scanf("%d",&iNo1);

    printf("Enter first number\n");
    scanf("%d",&iNo1);

    printf("Enter first number\n");
    scanf("%d",&iNo1);

    iRet = Multiply(iNo1,iNo2,iNo3);

    printf("Multiplication is : %d\n",iRet);

    return 0;
}