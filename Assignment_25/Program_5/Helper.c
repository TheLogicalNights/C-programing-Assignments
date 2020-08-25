///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplaySchedule
// Parameters    : Char
// Return Value  : None
// Description   : it takes division of student as input and display exam schedule according to division
// Author        : Swapnil Ramesh Adhav
// Date          : 21th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void DisplaySchedule(char cDiv)
{
    if(cDiv>=65 && cDiv<=90)
    {
        cDiv = cDiv+32;
    }
    switch(cDiv)
    {
        case 'a' : printf("Your Exam at 7 AM\n");
                   break;

        case 'b' : printf("Your Exam at 8.30 AM\n");
                   break;

        case 'c' : printf("Your Exam at 9.20 AM\n");
                   break;

        case 'd' : printf("Your Exam at 10.30 AM\n");
                   break;
            
        default : printf("Please Enter Valid Division\n");
    }
}