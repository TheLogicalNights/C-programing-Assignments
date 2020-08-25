/*
    Problem Statement : Accept division of student from user and depends on the division
                        display exam timing. There are 4 divisions in school as A,B,C,D. Exam
                        of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
                        (Application should be case insensitive)
                        
                        Input : C
                        Output : Your exam at 9.20 AM
                        
                        Input : d
                        Output : Your exam at 10.30 AM
*/

#include "Header.h"

int main()
{
    char cValue = '\0';

    printf("Enter Your Division\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    
    return 0;
}