/*
    Problem Statement : Write a recursive program which accept string from user and count number
                        of small characters.
                        
                        Input : HElloWOrlD
                        Output : 5

*/

#include "Header.h"

int main()
{
    char cStr[30] = {'\0'};
    int iRet = 0;

    printf("Enter a string\n");
    scanf(" %[^'\n']s",cStr);

    iRet = Small(cStr);

    printf("Number of snall characters in the string are : %d\n",iRet); 
    
    return 0;
}