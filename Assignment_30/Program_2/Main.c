/*
    Problem Statement : Write a program which accept string from user and copy the
                        contents of that string into another string. (Implement strncpy()
                        function)

                        Input :
                        “Marvellous Multi OS”
                        10
                        Output :
                        “Marvellous

                        Note : If third parameter is greater than the size of source string then
                        copy whole string into destination.
*/

#include "Header.h"

int main()
{
    char cSource[30];
    char cDestination[30];
    int iNo = 0;

    printf("Enter the Soource String\n");
    scanf("%[^'\n']s",cSource);
    printf("Enter the number that much elements you  want to copy\n");
    scanf("%d",&iNo);

    StrNCpyX(cSource,cDestination,iNo);

    printf("Destination String is : %s\n",cDestination);

    return 0;
}