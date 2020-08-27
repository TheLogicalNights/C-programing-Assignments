/*
    Problem Statement : Write a program which 2 strings from user and concat second string
                        after first string. (Implement strcat() function).

                        Input :
                        “Marvellous Infosystems”
                        “Logic Building”

                        Output :
                        “Marvellous Infosystems Logic Building”
*/

#include "Header.h"

int main()
{
    char cSource[30];
    char cDestination[30];

    printf("Enter Source String\n");
    scanf("%[^'\n']s",cSource);
    printf("Enter Destination String\n");
    scanf(" %[^'\n']s",cDestination);

    StrCatX(cSource,cDestination);

    printf("After concatination : %s\n",cSource);
    
    return 0;
}