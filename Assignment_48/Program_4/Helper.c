///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Size
// Parameters    : String
// Return Value  : int
// Description   : It takes file name as input and return the size of file
// Author        : Swapnil Ramesh Adhav
// Date          : 22th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int Size(char *filename,int *iSize)
{
	int iFd = 0;
	int iRet = 0;

	char cBuffer[1024] = {'\0'};
	
	iFd = open(filename,O_RDONLY);
	
	if(iFd==-1)
	{
		return -1;
	}
	else
	{
		while((iRet = read(iFd,cBuffer,80)) != 0)
		{
			*iSize = *iSize + iRet;
		}
	}
	close(iFd);
	//*iSize = iResult;
	return TRUE;
}
