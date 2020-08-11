/*
    Problem Statement : Accept one number from user and check whether it is divisible by 5 or not
*/

#include "Header.h"
int main() //Entry point function
{
    int iNo = 0;
    BOOL iAns = FALSE;
    
    printf("Enter a Number....\n");
    scanf("%d",&iNo);

    iAns = Check(iNo);

    if(iAns==TRUE)
    {
        printf("%d is divisible by 5",iNo);
    }
    else
    {
        printf("%d is not divisible by 5",iNo);
    }
    
    return 0;
}