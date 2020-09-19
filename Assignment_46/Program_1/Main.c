/*
    Problem Statement : Write a recursive program which accept number from user and display below
                        pattern.
                        
                        Input : 5
                        Output : 5 * 4 * 3 * 2 * 1 *

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
