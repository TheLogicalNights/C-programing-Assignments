/*
    Problem Statement : Write a program which 2 strings from user and check whether first
                        N contents of two strings are equal or not. (Implement strcmp()
                        function).
                        Note : If third parameter is greater than the size of second string then
                        concat whole string after first string.

                        Input :
                                “Marvellous Infosystems”
                                “Marvellous Logic Building”
                                10

                        Output :
                                TRUE
*/

#include "Header.h"

int main()
{
    char cStr1[30],cStr2[30];
    int iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter first string : ");
    scanf("%[^'\n']s",cStr1);
    printf("Enter first string : ");
    scanf(" %[^'\n']s",cStr2);
    printf("Enter a number : ");
    scanf("%d",&iNo);

    bRet = StrNCmp(cStr1,cStr2,iNo);

    if(bRet==TRUE)
    {
        printf("Contents of string are equal\n");
    }
    else if(bRet==FALSE)
    {
        printf("Contents of string are un-equal\n");
    }
    else
    {
        printf("Error : Something went wrong please try again later\n");
    }
    return 0;
}