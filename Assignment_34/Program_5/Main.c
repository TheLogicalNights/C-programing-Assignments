/*
    Problem Statement : Write a program which accept one number from user and toggle contents
                        of first and last nibble of the number. Return modified number. (Nibble is a
                        group of four bits)
*/

#include "Header.h"

int main()
{
    UINT iNo = 0;
    UINT iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = ToggleBit(iNo);

    printf("Modified Number is : %d\n",iRet);

    return 0;
}