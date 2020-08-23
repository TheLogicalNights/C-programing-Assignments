///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : TouristBill
// Parameters    : Integer
// Return Value  : Integer
// Description   : it takes kilometers from user and calculate bill accordiing to rates 
// Author        : Swapnil Ramesh Adhav
// Date          : 20th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int TouristBill(int iKm)
{
    int iExceed = 0;
    int iBill = 0;
    int iBill1 = 0;
    if(iKm<0)
    {
        iKm = -iKm;
    }
    if(iKm<100)
    {
        return iKm * 25;                  // If runnung is less than 100 the charges are 25rs/km
    }
    else
    {
        iExceed = iKm - 100;              //we want to know how much km are exceeds than 100km so subtract 100 from inputed km
        iBill = 100 * 25;                 // this is bill of subtracted 100km as runnung is less than 100 the charges are 25rs/km
        iBill1 = iExceed * 15;            // this is bill for km which are exceed than 100km at rate 15rs/km 
        return iBill + iBill1;
    }
}