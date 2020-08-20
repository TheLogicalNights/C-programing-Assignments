///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CircleArea
// Parameters    : Float
// Return Value  : Float
// Description   : it takes radius of circle as parameter and return the area of that circle
// Author        : Swapnil Ramesh Adhav
// Date          : 7th August 2020
//                                                                                                                      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

float CircleArea(float fRadius)
{
    float fArea = 0.0;

    fArea = PI * fRadius * fRadius;

    return fArea;
}