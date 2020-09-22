/*
	Problem Statement : Write application which accept file name from user and open that file in read mode.

			    Input : Demo.txt
			    Output : File opened successfully.
*/

#include "Header.h"

int main()
{
	char cFile[80] = {'\0'};
	BOOL bRet = FALSE;
	
	printf("Enter file name\n");
	scanf("%s",cFile);
	
	bRet = Open(cFile);
	
	if(bRet==TRUE)
	{
		printf("%s opened successfully\n",cFile);
	}
	else
	{
		printf("Error : Unable to open file\n");
		return -1;
	}
	return 0;
}
