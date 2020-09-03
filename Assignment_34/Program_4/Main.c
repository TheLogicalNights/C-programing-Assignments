/*
    Problem Statement : Write a program which accept one number and position from user and
                        toggle that bit. Return modified number.

                        Input : 10 3
                        Output : 14 

*/

#include "Header.h"

int main()
{
    UINT iNo = 0;
    int iRet = 0,iPos = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);
    printf("Enter the position\n");
    scanf("%d",&iPos);

    iRet = ToggleBit(iNo,iPos);

    if(iRet<0)
    {
        printf("Error : Invalid Input\n");
    }
    else
    {
        printf("Modified Number is : %d\n",iRet);
    }

    return 0;
}