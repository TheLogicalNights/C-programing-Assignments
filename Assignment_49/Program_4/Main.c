/*
	Problem Statement : 	Write a program which accepts file name and one character from user and
				count number of occurrences of that characters from that file.

				Input : Demo.txt ‘M’
				Output : Frequency of M is 7
*/

#include "Header.h"

int main()
{
	char cFile[80] = {'\0'};
	char ch = '\0';
	BOOL bRet = FALSE;
	int iFrequency = 0;
	
	printf("Enter file name\n");
	scanf(" %s",cFile);
	printf("Enter character\n");
	scanf(" %c",&ch);
	
	bRet = Frequency(cFile,ch,&iFrequency);
	
	if(bRet==TRUE)
	{
		printf("Frequency of %c is : %d\n",ch,iFrequency);
	}
	else
	{
		printf("Error : Unable to open file\n");
		return -1;
	}
	return 0;
}
