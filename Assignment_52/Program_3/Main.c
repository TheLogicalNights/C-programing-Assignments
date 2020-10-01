/*
	Problem Statement : 	Write a program which accept file name which contains information of
				student and display the average marks of students.
*/

#include "Header.h"

int main()
{
	char filename[80] = {'\0'};
	float fRet = 0;
	
	printf("Enter filename\n");
	scanf(" %s",filename);
	
	fRet = Average(filename);
	
	if(fRet==-1)
	{
		printf("Error : Unable to open %s\n",filename);
		return -1;
	}
	
	printf("Average of marks of students is : %f\n",fRet);
	
	return 0;
}
