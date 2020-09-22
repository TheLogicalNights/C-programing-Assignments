///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Write
// Parameters    : String , String
// Return Value  : BOOL
// Description   : It takes file name and data as input and append into the file
// Author        : Swapnil Ramesh Adhav
// Date          : 22th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL Write(char *filename,char *data)
{
	int iFd = 0;
	int iRet = 0;
	int iLen = 0;
	char space[1] = {' '};
	iFd = open(filename,O_WRONLY|O_APPEND);
	
	if(iFd==-1)
	{
		return FALSE;
	}
	else
	{
		iLen = strlen(data);
		iRet = write(iFd,data,iLen);
		iRet = write(iFd,space,1);
		close(iFd);
		return TRUE;
	}
}
