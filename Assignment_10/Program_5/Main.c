/*
    Problem Statement : Write a program which accept area in square feet and convert it into square 
                        meter. (1 square feet = 0.0929 Square meter) 

                        Input :  5 
                        Output :  0.464515 
                        
                        Input :  7 
                        Output :  0.650321

*/

/*
    ALGORITHM
        START
            Accept area in square feet from user as Asqft
            Create one variable Asqm and initialize it to 0.0
            if Asqft < 0
                then print invalid Input
            otherwise perform Asqm = AsqFt * 0.0929
            return the value of Asqm
        STOP
*/

#include "Header.h"

int main()
{
    int iAreaSqareFeet = 0;
    double dAreaSquareMeter = 0.0;
    BOOL bRet = FALSE;

    printf("Enter Area in Square in Feet\n");
    scanf("%d",&iAreaSqareFeet);

    bRet = SquareMeter(iAreaSqareFeet,&dAreaSquareMeter);

    if(bRet==TRUE)
    {
        printf("Area in Square Meter is : %lf\n",dAreaSquareMeter);
    }
    else
    {
        printf("Error: Invalid input\n");
    }
    
    return 0;
}