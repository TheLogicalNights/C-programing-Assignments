/*
    Problem Statement : Accept Character from user and check whether it is special symbol
                        or not (!, @, #, $, %, ^, &, *).
                        
                        Input : %
                        Output : TRUE
                        
                        Input : d
                        Output : FALSE
*/

#include "Header.h"

int main()
{
    char cValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a character\n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet==TRUE)
    {
        printf("%c is special character\n",cValue);
    }
    else
    {
        printf("%c is not a special character\n",cValue);
    }

    return 0;
}