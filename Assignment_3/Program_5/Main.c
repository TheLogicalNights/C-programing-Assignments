/*
    Problem Statement : Accept one Character from user and chech whether the character is Vowel(a,e,i,o,u) or not
*/

#include "Header.h"

int main()
{
    char cChar = '\0';
    BOOL iRet = FALSE;

    printf("Enter one chatacter\n");
    scanf("%c",&cChar);

    iRet = ChkVowel(cChar);

    if(iRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }
    

    return 0;
}