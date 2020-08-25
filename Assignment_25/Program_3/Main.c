/*
    Problem Statement : Accept Character from user and check whether it is digit or not
                        (0-9).
                        
                        Input : 7
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

    bRet = ChkDigit(cValue);

    if(bRet==TRUE)
    {
        printf("%c is digit\n",cValue);
    }
    else
    {
        printf("%c is not a digit\n",cValue);
    }

    return 0;
}