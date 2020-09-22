/*
	Problem Statement : Write application which accept file name from user and one string from user. Write
			    that string at the end of file.

			    Input : Demo.txt
			    Output: Hello World at the end of Demo.txt
*/

#include "Header.h"

int main()
{
	char cFile[80] = {'\0'};
	char cData[1024] = {'\0'};
	BOOL bRet = FALSE;
	
	printf("Enter file name\n");
	scanf(" %s",cFile);
	printf("Enter data that you want to append\n");
	scanf(" %[^'\n']s",cData);
	
	bRet = Write(cFile,cData);
	
	if(bRet==TRUE)
	{
		printf("Data successfully writed into the file\n");
	}
	else
	{
		printf("Error : Unable to write data\n");
		return -1;
	}
	return 0;
}
