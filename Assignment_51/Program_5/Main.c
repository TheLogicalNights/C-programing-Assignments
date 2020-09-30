/*
	Problem Statement : 	Write a program which accept file name which contains information of
				student and marks. Display all students having that marks.
*/

#include "Header.h"

int main()
{
	char filename[80] = {'\0'};
	int iMarks = 0;
	
	printf("Enter filename\n");
	scanf(" %s",filename);
	
	printf("Enter marks\n");
	scanf("%d",&iMarks);

	Display(filename,iMarks);
	
	return 0;
}
