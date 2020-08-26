/*
    Problem Statement : Write a program which accept string from user and check whether
                        it contains vowels in it or not.

                        Input : “marvellous”
                        Output : TRUE

                        Input : “Demo”
                        Output : TRUE

                        Input : “xyz”
                        Output : FALSE
*/

#include "Header.h"

int main()
{
    char cValue[20];
    BOOL bRet = FALSE;

    printf("Enter a String\n");
    scanf("%[^'\n']s",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet==TRUE)
    {
        printf("Vowels are present\n");
    }
    else if(bRet==FALSE)
    {
        printf("Vowels are not present\n");
    }
    else
    {
        printf("Error : Something went wrong please try again\n");
    }
    return 0;
}
