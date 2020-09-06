/*
    Problem Statement : Write a program which accept one number from user and range of
                        positions from user. Toggle all bits from that range.

                        Input : 897  9  13
                        Toggle all bits from position 9 to 13 of input number ie 879.

*/

#include "Header.h"

int main()
{
    UINT iNo = 0;
    int iLow = 0;
    int iUp = 0;
    UINT iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);
    printf("Enter lower bound of range :");
    scanf("%d",&iLow);
    printf("Enter upper bound of range :");
    scanf("%d",&iUp);

    iRet = ToggleBitRange(iNo,iLow,iUp);

    if(iRet==-1)
    {
        printf("Error : Invalid Range\n");
    }
    else
    {
        printf("Modified Number is : %d\n",iRet);
    }
    
    return 0;
}