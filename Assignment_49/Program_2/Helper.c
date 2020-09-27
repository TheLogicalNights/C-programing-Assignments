///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkSmall
// Parameters    : String , Integer *
// Return Value  : BOOL
// Description   : It takes file name as input and and count number of small characters from that file
// Author        : Swapnil Ramesh Adhav
// Date          : 23rd Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkSmall(char *filename,int *iCnt)
{
	int iFd = 0;
	int iRead = 0;
	int i = 0;
	int iCounter = 0;
	char cBuffer[BUFF_SIZE] = {'\0'}; 
	
	iFd = open(filename,O_RDONLY);
	
	if(iFd==-1)
	{
		return FALSE;
	}
	else
	{
		while((iRead = read(iFd,cBuffer,BUFF_SIZE)) != 0)
		{
			cBuffer[iRead] = '\0';
			while(cBuffer[i]!='\0')
			{
				if((cBuffer[i]>='a') && (cBuffer[i]<='z'))
				{
					iCounter++;
				}
				i++;
			}
			i=0;
			memset(cBuffer,'\0',BUFF_SIZE);
		}
		*iCnt = iCounter;
		close(iFd);
		return TRUE;
	}
}
