/*
	Problem Statement : Write application which accept file name from user and create that file.

			    Input : Demo.txt
			    Output : File created successfully.
*/

#include "Header.h"

int main()
{
	char cFile[80] = {'\0'};
	BOOL bRet = FALSE;
	
	printf("Enter file name\n");
	scanf("%s",cFile);
	
	bRet = Create(cFile);
	
	if(bRet==TRUE)
	{
		printf("%s created successfully\n",cFile);
	}
	else
	{
		printf("Error : Unable to create file\n");
		return -1;
	}
	return 0;
}
