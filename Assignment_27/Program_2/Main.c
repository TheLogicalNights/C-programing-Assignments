/*
    Problem Statement : Write a program which accept string from user and count number of
                        small characters.

                        Input : “Marvellous”
                        Output : 9
*/

#include "Header.h"

int main()
{
    char cString[20];
    int iRet = 0;

    printf("Enter a String\n");
    scanf("%[^'\n']s",&cString);

    iRet = CountSmall(cString);

    if(iRet==-1)
    {
        printf("Error : Something Went Wrong Please try again\n");
    }
    else
    {
        printf("Small Count is : %d\n",iRet);
    }
    return 0; 
}