/*
    Problem Statement : Write a program which accept string from user and accept one
                        character. Check whether that character is present in string or not.
                            
                            Input :
                            “Marvellous Multi OS”
                            e
                            Output : TRUE

                            Input : “Marvellous Multi OS”
                            W
                            Output :
                            FALSE
*/

#include "Header.h"

int main()
{
    char cArr[30];
    char cCh = '\0';
    BOOL bRet = FALSE;

    printf("Enter a String\n");
    scanf("%[^'\n']s",cArr);

    printf("Enter one character that you want to search\n");
    scanf(" %c",&cCh);

    bRet = ChkChar(cArr,cCh);

    if(bRet==ERROR)
    {
        printf("Error : Something went wrong please try again\n");
    }
    else if(bRet==TRUE)
    {
        printf("Character you entered is present in string\n");
    }
    else
    {
        printf("Character you entered is not present in string\n");
    }

    return 0;
}