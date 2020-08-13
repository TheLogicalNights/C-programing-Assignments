/*
    Problem Statement : Accept total marks and obtained marks from user and calculate percentage
*/

#include "Header.h"

int main()
{
    int iTotal = 0, iObtain = 0;
    float fRet = 0.0;
    printf("Enter Total MArks\n");
    scanf("%d",&iTotal);

    printf("Enter obtained marks\n");
    scanf("%d",&iObtain);

    fRet = Percentage(iTotal,iObtain);

    printf("Percentage is : %f\n",fRet);

    return 0;
}