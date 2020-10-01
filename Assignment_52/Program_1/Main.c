/*
	Problem Statement : 	Write a program which accept file name which contains information of
				student and display the information of student having highest marks.
*/

#include "Header.h"

int main()
{
	char filename[80] = {'\0'};
	
	printf("Enter filename\n");
	scanf(" %s",filename);
	
	Display(filename);
	
	return 0;
}
