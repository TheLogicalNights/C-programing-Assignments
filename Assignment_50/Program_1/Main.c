/*
	Program Statement : 	Write a program which accept oinformation of students from user and
				write that information into the file.
*/

#include "Header.h"

int main()
{
	int iNo = 0;
	BOOL bRet = FALSE;
	
	char filename[80] = {'\0'};
	
	printf("Enter the number of students\n");
	scanf("%d",&iNo);	
	
	printf("Enter the file name\n");
	scanf("%s",filename);
	
	bRet = Insert(filename,iNo);
	if(bRet==TRUE)
	{
		printf("Information successfully writed into the %s\n",filename);
	}	
	else
	{
		printf("Error : Unable to open %s\n",filename);
		return -1;
	}	
	return 0;
}
