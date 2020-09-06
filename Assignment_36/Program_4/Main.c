/*
    Problem Statement : Accept string from user and reverse the contents of that string by
                        toggling the case.

                        Input : “aCBdef”
                        Output : “FEDcbA”
*/

#include "Header.h"

int main()
{
    char cStr[30];

    printf("Enter a String\n");
    scanf("%[^'\n']s",cStr);

    ToggleStrRevX(cStr);

    printf("Modified String is : %s\n",cStr);
    
    return 0;
}