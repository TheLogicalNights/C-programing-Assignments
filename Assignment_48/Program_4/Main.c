/*
	Problem Statement : Write application which accept file name from user and display size of file.

			    Input : Demo.txt
			    Output : File size is 56 bytes
*/

#include "Header.h"

int main()
{
	char cFile[80] = {'\0'};
	int iSize = 0;
	BOOL bRet = FALSE;
	
	printf("Enter file name\n");
	scanf("%s",cFile);
	
	bRet = Size(cFile,&iSize);
	if(bRet==TRUE)
	{
		printf("Size of %s is : %d bytes\n",cFile,iSize);
	}
	else
	{
		printf("Error : Unable to open file\n");
		return -1;
	}
	return 0;
}
