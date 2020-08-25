/*
    Problem Statement : Accept Character from user and check whether it is capital or not
                         (A-Z).
                         Input : F
                         Output : TRUE

                         Input : d
                         Output : FALSE
*/

#include "Header.h"

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter one character\n");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet==TRUE)
    {
        printf("%c is Capital\n",cValue);
    }
    else
    {
        printf("%c is not capital\n",cValue);
    }

    return 0;
}