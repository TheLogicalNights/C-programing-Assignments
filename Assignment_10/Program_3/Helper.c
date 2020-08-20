///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : KmToMeter
// Parameters    : Integer,Integer *
// Return Value  : BOOLEAN
// Description   : it takes distance in km as input and convert it distance into meters
// Author        : Swapnil Ramesh Adhav
// Date          : 7th August 2020
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////     

#include "Header.h"

BOOL KmToMeter(int iKm, int *pMeters)
{
    if(iKm<0)
    {
        return FALSE;
    }
    else
    {
        *pMeters  = iKm * 1000;
        return TRUE;
    }
    
}