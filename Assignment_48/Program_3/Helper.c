///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Read
// Parameters    : String
// Return Value  : None
// Description   : It takes file name as input and read whole file
// Author        : Swapnil Ramesh Adhav
// Date          : 22th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Read(char *filename)
{
	int iFd = 0;
	int iRet = 0;
	char cBuffer[1024] = {'\0'};
	
	iFd = open(filename,O_RDONLY);
	
	if(iFd==-1)
	{
		return ;
	}
	else
	{
		while((iRet = read(iFd,cBuffer,80)) != 0)
		{
			cBuffer[iRet] = '\0';
			printf("%s",cBuffer);
		}
	}
	close(iFd);
}
