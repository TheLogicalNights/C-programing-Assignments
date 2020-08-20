///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : AreaRectangle
// Parameters    : Float , Float
// Return Value  : BOOL
// Description   : it takes height and width of rectangle as input and calculate the area of rectangle
// Author        : Swapnil Ramesh Adhav
// Date          : 7th August 2020
//                                                                                                                              
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL AreaRectangle(float fHeight, float fWidth,float *pArea)
{
    float fAns = 0.0;
    if(fHeight<=0 || fWidth<=0)
    {
        return FALSE;
    }
    fAns = fHeight * fWidth;
    *pArea = fAns;
    return TRUE;
}