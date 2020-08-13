///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Percentage
// Parameters    : Integer, Integer
// Return Value  : Float
// Description   : it is used to find percentage 
// Author        : Swapnil Ramesh Adhav
// Date          : 3 August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

float Percentage(int iTotal ,int iObtain)
{
    float fPer = 0.0;
    if(iTotal==0)
    {
        return 0.0;
    }

    fPer = ((float)iObtain / (float)iTotal) * 100;
    
    return fPer;
}