/*
    Problem Statement : Accept Character from user and check whether it is small case or
                        not (a-z).
                        
                        Input : g
                        Output : TRUE
                        
                        Input : D
                        Output : FALSE
*/

#include "Header.h"

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a character\n");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet==TRUE)
    {
        printf("%c is in small case\n",cValue);
    }
    else if(bRet==FALSE)
    {
        printf("%c is not in small case\n",cValue);
    }
    else
    {
        printf("%c its not alphabet\n",cValue);
    }

    return 0;
}