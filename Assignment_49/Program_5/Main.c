/*
	Problem Statement : 	Write a program which accepts file name and one count from user and read
				that number of characters from starting position.

				Input : Demo.txt   12
				Output : Display first 12 characters from Demo.txt
*/

#include "Header.h"

int main()
{
	char cFile[80] = {'\0'};
	BOOL bRet = FALSE;
	int iCnt = 0;
	
	printf("Enter file name\n");
	scanf("%s",cFile);
	printf("Enter the number of characters that you want to read\n");
	scanf("%d",&iCnt);
	
	bRet = Read(cFile,iCnt);
	
	if(bRet==TRUE)
	{
		return 0;
	}
	else if(bRet==FALSE)
	{
		printf("Error : Unable to open file\n");
		return -1;
	}
	else
	{
		printf("Error : Size entered by user is crossing the limit of size of buffer\ncannot read that much bytes at a time\nBuffer size is : %d\n",BUFF_SIZE);
		return -1;
	}
}
