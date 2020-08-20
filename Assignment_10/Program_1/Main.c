/*
    Program Statement : Write a program which accept radius of circle from user and calculate its area. 
                        Consider value of PI as 3.14. (Area = PI * Radius * Radius) 

                        Input :  5.3  
                        Output :  88.2026   

                        Input :  10.4  
                        Output :  339.6224 

*/

/*
    ALGORITHM
        START
            Accept Radius of circle from user as radius
            Create one variable as Area
            perform Area = 3.14 * radius * radius
            return the value of Radius
        STOP
*/

#include "Header.h"

int main()
{
    float fRadius = 0.0;
    float fRet = 0.0;

    printf("Enter Radius of circle\n");
    scanf("%f",&fRadius);

    fRet = CircleArea(fRadius);

    printf("Area of Circle is : %f\n",fRet);

    return 0;
}