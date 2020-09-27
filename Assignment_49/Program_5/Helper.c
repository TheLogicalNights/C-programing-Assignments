///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Read
// Parameters    : String , Integer
// Return Value  : BOOL
// Description   : It takes file name and one integer as input and read that much characters from the file
// Author        : Swapnil Ramesh Adhav
// Date          : 23rd Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL Read(char *filename,int iCnt)
{
	int iFd = 0;
	int iRet = 0;
	int iBreak = 0;
	char cBuffer[BUFF_SIZE] = {'\0'};
	
	if(iCnt>BUFF_SIZE)
	{
		return ERROR;
	}
	
	iFd = open(filename,O_RDONLY);
	
	if(iFd==-1)
	{
		return FALSE;
	}
	else
	{
		while((iRet = read(iFd,cBuffer,iCnt)) != 0)
		{
			iBreak += iRet;
			cBuffer[iRet] = '\0';
			printf("%s\n",cBuffer);
			if(iBreak>=iCnt)
			{
				break;
			}
			memset(cBuffer,'\0',BUFF_SIZE);
		}
		close(iFd);
		return TRUE;
	}
}
