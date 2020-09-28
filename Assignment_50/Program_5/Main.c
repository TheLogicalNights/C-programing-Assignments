/*
	Problem Statement : 	Write a program which accept file name which contains information of
				student and display addition marks of students.
*/

#include "Header.h"

int main()
{
	char filename[80] = {'\0'};
	int iRet = 0;
	
	printf("Enter filename\n");
	scanf("%s",filename);
	
	iRet = AddMarks(filename);
	
	if(iRet<0)
	{
		printf("Error : Unable to open %s\n",filename);
		return 1;
	}
	else
	{
		printf("Addition of marks of students is : %d\n",iRet);
	}
	
	return 0;
}
