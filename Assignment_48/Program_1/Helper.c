///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Open
// Parameters    : String
// Return Value  : BOOL
// Description   : It takes file name as input and open that file
// Author        : Swapnil Ramesh Adhav
// Date          : 22th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL Open(char *filename)
{
	int iFd = 0;
	
	iFd = open(filename,O_RDONLY);
	
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
