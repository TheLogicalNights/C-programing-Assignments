/*
    Problem Statement : Write a program which accept string from user and count number of
                        capital characters.

                        Input : “Marvellous Multi OS”
                        Output : 4
*/

#include "Header.h"

int main()
{
    char cString[20];
    int iRet = 0;

    printf("Enter a String\n");
    scanf("%[^'\n']s",cString);

    iRet = CountCapital(cString);

    if(iRet==-1)
    {
        printf("Error : Something Went Wrong please try again.\n");
    }
    else
    {
        printf("Capital Count is : %d\n",iRet);
    }

    return 0;
}