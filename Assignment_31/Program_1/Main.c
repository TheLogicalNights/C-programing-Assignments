/*
    Promblem Statement : Write a program which accept string from user and copy that
                         characters of that string into another string in reverse order.
                         
                         Input : “Marvellous Python”
                         Output : “nohtyP suollevraM”
*/

#include "Header.h"

int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter a String\n");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr,Brr);

    printf("After string reverse : %s\n",Brr);

    return 0;
}