/*
	Problem Statement : Write application which accept file name from user and read all data from that file
			    and display contents on screen.

			    Input : Demo.txt
			    Output : Display all data of file.
*/

#include "Header.h"

int main()
{
	char cFile[80] = {'\0'};
	
	printf("Enter file name\n");
	scanf("%s",cFile);
	
	Read(cFile);
	
	return 0;
}
