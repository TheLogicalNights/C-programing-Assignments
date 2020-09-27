/*
	Problem Statement : 	Write a program which accepts file name from user and count number of
			    	capital characters from that file.
	
			    	Input : Demo.txt
			    	Output : Number of capital characters are 23
*/

#include "Header.h"

int main()
{
	char cFile[80] = {'\0'};
	BOOL bRet = FALSE;
	int iCapital = 0;
	
	printf("Enter file name\n");
	scanf("%s",cFile);
	
	bRet = ChkCapital(cFile,&iCapital);
	
	if(bRet==TRUE)
	{
		printf("Number of capital characters are : %d\n",iCapital);
	}
	else
	{
		printf("Error : Unable to open file\n");
		return -1;
	}
	return 0;
}
