/*
    Problem Statement : Accept one number from user and check whether that number is greater than 100 or not
*/

/*
    ALGORITHM
        START
            Accept one number as no
            if no < 100
                then return false
            therwise return true
        STOP
*/
#include "Header.h"

int main()
{
    int iNO = 0;
    BOOL iRet = FALSE;

    printf("Enter a number\n");
    scanf("%d",&iNO);

    iRet = ChkGreater(iNO);

    if(iRet==TRUE)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return 0;
}