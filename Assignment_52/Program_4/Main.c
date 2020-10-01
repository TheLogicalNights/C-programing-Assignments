/*
	Problem Statement : 	Write a program which accept file name which contains information of
				student and display the information based on the class (First class (60 to100), 
				Second class (50 to 60), Pass class (0 to 50)).
*/

#include "Header.h"

int main()
{
	char filename[80] = {'\0'};
	float fRet = 0;
	
	printf("Enter filename\n");
	scanf(" %s",filename);
	
	Display(filename);
	
	return 0;
}
