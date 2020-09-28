/*
	Problem Statement : 	Write a program which accept file name which contains information of
				student and display only marks of students.
*/

#include "Header.h"

int main()
{
	char filename[80] = {'\0'};
	
	printf("Enter filename\n");
	scanf("%s",filename);
	
	Display(filename);
	
	return 0;
}
