/*
    Problem Statement : Accept one number from user and check whether it is even or odd
*/
#include "Header.h"

int main()
{
    int iNo = 0;
    BOOL iAns = FALSE ;

    printf("Enter a nukber.....\n");
    scanf("%d",&iNo);

    iAns = ChkEvenOdd(iNo);

    if(iAns==TRUE)
    {
        printf("%d is even number\n",iNo);
    }
    else
    {
        printf("%d is odd number",iNo);
    }
    
    return 0;
}