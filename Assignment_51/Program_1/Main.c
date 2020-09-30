/*
	Problem Statement : 	Write a program which accept file name which contains information of
				student as well as accept name of student and dsplay only information of
				that student.
*/

#include "Header.h"

int main()
{
	char filename[80] = {'\0'};
	char studname[80] = {'\0'};
	
	printf("Enter filename\n");
	scanf(" %s",filename);
	
	printf("Enter name of student\n");
	scanf(" %[^'\n']s",studname);
	
	Display(filename,studname);
	
	return 0;
}
