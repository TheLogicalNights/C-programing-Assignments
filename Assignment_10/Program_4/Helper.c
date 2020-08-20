///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FhToCs
// Paremeters    : Integer
// Return Value  : Float
// Description   : it takes temprature in fahrenheit and convert it into degree celcius
// Author        : Swapnil Ramesh Adhav
// Date          : 7th August 2020
//                                                                                                                      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

float FhToCs(int fFh)
{ 
    float fCs = 0.0;

    fCs = (((float)fFh-32)*(5./9));

    return fCs;
}