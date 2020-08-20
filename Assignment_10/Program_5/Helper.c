///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SquareMeter
// Parameters    : Integer , Double *
// Return Value  : BOOLEAN
// Description   : it takes area in square feet and convert it into area in square meter
// Author        : Swapnil Ramesh Adhav
// Date          : 7th August 2020
//                                                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL SquareMeter(int iSqFt, double *pSqM)
{
    if(iSqFt<0)
    {
        return FALSE;
    }
    else
    {
        *pSqM = (double)iSqFt * 0.0929;
        return TRUE;
    }
    
}