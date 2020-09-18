/*
    Problem Statement : Write a recursive program which display below pattern.

                        Input : 6
                        Output : A B C D E F
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    
    printf("Enter a number\n");
    scanf("%d",&iNo);

    Display(iNo);
    printf("\n");
    return 0;
}