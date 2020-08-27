/*
    Problem Statement : Write a program which accept string from user and copy the
                        contents of that string into another string. (Implement strcpy()
                        function)

                        Input : “Marvellous Multi OS”
                        Output : “Marvellous Multi OS”
                        in another string
*/

#include "Header.h"

int main()
{
    char cSource[30];
    char cDestination[30];

    printf("Enter Source String\n");
    scanf("%[^'\n']s",cSource);

    StrCpyX(cSource,cDestination);

    printf("Destination String is : %s\n",cDestination);

    return 0;
}