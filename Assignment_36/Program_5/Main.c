/*
    Problem Statement : Accept string from user and check whether the string is pallindrome
                        or not without considering its case.

                        Input : “1abccBA1”
                        Output : TRUE
*/

#include "Header.h"

int main()
{
    char cStr[30];
    BOOL bRet = FALSE;

    printf("Enter a number\n");
    scanf("%[^'\n']s",cStr);

    bRet = StrPallindrome(cStr);

    if(bRet==TRUE)
    {
        printf("String is Pallindrome\n");
    }
    else if(bRet==FALSE)
    {
        printf("String is not pallindrome\n");
    }
    else
    {
        printf("Error : Something went wrong please try again...\n");
    }

    return 0;
}