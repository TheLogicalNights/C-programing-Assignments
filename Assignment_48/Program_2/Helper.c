///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Create
// Parameters    : String
// Return Value  : BOOL
// Description   : It takes file name as input and open that file
// Author        : Swapnil Ramesh Adhav
// Date          : 22th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL Create(char *filename)
{
	int iFd = 0;
	
	iFd = creat(filename,0777);
	
	if(iFd==-1)
	{
		return FALSE;
	}
	else
	{
		close(iFd);
		return TRUE;
	}
}
