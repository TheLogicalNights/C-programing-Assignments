/*
    Problem Statement : Write a program which accept width & height of rectangle from user and calculate 
                        its area. (Area = Width * Height) 

                        Input :  5.3  9.78 
                        Output :  51.834 

*/

/*
    ALGORITHM
        START
            Accept height of the rectangle
            Accept width of rectangle
            Create one variable as Area
            
            perform Area = width * height

            Return the value of Area
        STOP
*/

#include "Header.h"

int main()
{
    float fHeight = 0.0;
    float fWidth = 0.0;
    float fArea = 0.0;
    BOOL fRet = FALSE;

    printf("Enter the height of rectangle :\n");
    scanf("%f",&fHeight);

    printf("Enter the width of rectangle :\n");
    scanf("%f",&fWidth);

    fRet = AreaRectangle(fHeight,fWidth,&fArea);

    if(fRet==TRUE)
    {
        printf("Area of rectangle is : %f\n",fArea);
    }
    else
    {
        printf("Error: Invalid Input\n");
    }
    
    return 0;
}