/*
	Problem Statement : 	Write a program which accepts file name from user and count number of
				white spaces from that file.

				Input : Demo.txt
				Output : Number of white spaces are 13
*/

#include "Header.h"

int main()
{
	char cFile[80] = {'\0'};
	BOOL bRet = FALSE;
	int iSpaces = 0;
	
	printf("Enter file name\n");
	scanf("%s",cFile);
	
	bRet = ChkSpaces(cFile,&iSpaces);
	
	if(bRet==TRUE)
	{
		printf("Number of white spaces are : %d\n",iSpaces);
	}
	else
	{
		printf("Error : Unable to open file\n");
		return -1;
	}
	return 0;
}
