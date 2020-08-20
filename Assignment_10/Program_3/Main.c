/*
    Problem Statement : Write a program which accept distance in kilometre and convert it into meter. (1 
                        kilometre = 1000 Meter) 

                        Input :  5 
                        Output :  5000 

                        Input :  12 
                        Output :  12000 

*/

/*
    ALGORITHM
        START
            Accept distance in kilometers from user as km
            Create a variable meter and initialize it to 0 
            if km < 0
                print Invalid input
            otherwise perform meter = km * 1000;
            return the value of meter
        STOP
*/

#include "Header.h"

int main()
{
    int iDistanceInKm = 0;
    int iDistanceInMeters = 0;
    BOOL iRet = FALSE;

    printf("Enter Distance in Kilometers\n");
    scanf("%d",&iDistanceInKm);

    iRet = KmToMeter(iDistanceInKm,&iDistanceInMeters);

    if(iRet==TRUE)
    {
        printf("Distance in meters is : %d\n",iDistanceInMeters);
    }
    else
    {
        printf("Error: Invalid Input\n");
    }
    
    return 0;
}