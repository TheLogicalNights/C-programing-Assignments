/*
    Problem Statement : Accept Character from user and check whether it is alphabet or not
                        (A-Z a-z).

                        Input : F
                        Output : TRUE

                        Input : &
                        Output : FALSE
*/

#include "Header.h"

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a Character\n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet==TRUE)
    {
        printf("%c is alphabet\n",cValue);
    }
    else
    {
        printf("%c is not alphabet\n",cValue);
    }
    return 0;
}