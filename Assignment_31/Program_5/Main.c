/*
    Problem Statement : Write a program which accept string from user and copy that
                        characters of that string into another string by toggling the case.

                        Input : “Marvellous Python 2”
                        Output : “mARVELLOUS pYTHON 2”
*/

#include "Header.h"

int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter a string\n");
    scanf("%[^'\n']s",Arr);

    StrCpyToggle(Arr,Brr);

    printf("Modified String is : %s\n",Brr);
    
    return 0;
}