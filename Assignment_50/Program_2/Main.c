/*
	Problem Statement : 	Write a program which read all the information of students from the file.
*/

#include "Header.h"

int main()
{
	char filename[80];
	
	printf("Enter file name\n");
	scanf("%s",filename);
	
	Display(filename);
	
	return 0;
}
