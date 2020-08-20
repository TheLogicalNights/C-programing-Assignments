/*
    Problem Statement : Write a program which accept temperature in Fahrenheit and convert it into 
                        celsius. (1 celsius = (Fahrenheit -32) * (5/9)) 

                        Input :  10 
                        Output :  -12.2222 (10 - 32) * (5/9) 

                        Input :  34 
                        Output :  1.11111 (34 - 32) * (5/9) 

*/

/*
    ALGORITHM
        START
            Accept temprature in fahrenheit as F 
            Create variable C which store the temprature in celcius

            perform C = ((f-32) * (5/9))

            return the value of C
        STOP
*/

#include "Header.h"

int main()
{
    int fTempInFh = 0;
    float fRet = 0;

    printf("Enter temprature in fehrenheit\n");
    scanf("%d",&fTempInFh);

    fRet = FhToCs(fTempInFh);

    printf("Temprature in Celcius is : %f\n",fRet);

    return 0;
}