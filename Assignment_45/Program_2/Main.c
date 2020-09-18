/*
    Problem Statement : Write a recursive program which display below pattern.

                        Input : 5
                        Output : 1 2 3 4 5
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