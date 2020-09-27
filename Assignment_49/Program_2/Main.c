/*
	Problem Statement : 	Write a program which accepts file name from user and count number of
				small characters from that file.

				Input : Demo.txt
				Output : Number of small characters are 21
*/

#include "Header.h"

int main()
{
	char cFile[80] = {'\0'};
	BOOL bRet = FALSE;
	int iSmall = 0;
	
	printf("Enter file name\n");
	scanf("%s",cFile);
	
	bRet = ChkSmall(cFile,&iSmall);
	
	if(bRet==TRUE)
	{
		printf("Number of small characters are : %d\n",iSmall);
	}
	else
	{
		printf("Error : Unable to open file\n");
		return -1;
	}
	return 0;
}
