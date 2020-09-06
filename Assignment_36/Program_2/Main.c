/*
    Problem Statement : Write a program which 2 strings from user and check whether
                        contents of two strings are equal or not. (Implement strcmp()
                        function).

                        Input :
                                “Marvellous Infosystems”
                                “Marvellous Infosystems”
                        Output :
                                TRUE
*/

#include "Header.h"

int main()
{
    char Str1[30],Str2[30];
    BOOL bRet = UNEQUAL;

    printf("Enter first string : ");
    scanf("%[^'\n']s",Str1);
    printf("Enter second string : ");
    scanf(" %[^'\n']s",Str2);

    bRet = StrCmpX(Str1,Str2);

    if(bRet==EQUAL)
    {
        printf("Contents of strings are equal\n");
    }
    else if(bRet==UNEQUAL)
    {
        printf("Contents of strings are un-equal\n");
    }
    else
    {
        printf("Error : Something went wrong please try again later\n");
    }
    return 0;
}