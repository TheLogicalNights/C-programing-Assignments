/*
    Problem Statement : Write a program which accepts 2 strings from user and concat N
                        characters of second string after first string.Value of N should be
                        accepted from user. (Implement strncat() function).
                        Note : If third parameter is greater than the size of second string then
                        concat whole string after first string.
                        
                        Input :
                                “Marvellous Infosystems”
                                “Logic Building”
                                5
                        Output :
                                “Marvellous Infosystems Logic”
*/

#include "Header.h"

int main()
{
    char Str1[30],Str2[30];
    int iNo = 0;

    printf("Enter First String : ");
    scanf("%[^'\n']s",&Str1);
    printf("Enter Second String : ");
    scanf(" %[^'\n']s",&Str2);
    printf("Enter a number : ");
    scanf(" %d",&iNo);

    printf("%s\n",Str1);
    printf("%s\n",Str2);
    printf("%d\n",iNo);

    StrNCat(Str1,Str2,iNo);

    printf("Modified String is : %s\n",Str1);

    return 0;
}