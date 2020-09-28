///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : AddMarks
// Parameters    : String
// Return Value  : Integer
// Description   : It takes filename as input and return addition os marks of students from file
// Author        : Swapnil Ramesh Adhav
// Date          : 25th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int AddMarks(char *filename)
{
	int iFd = 0;
	int iRet = 0;
	int iAdd = 0;
	
	struct Student stud;
	
	iFd = open(filename,O_RDONLY);
	if(iFd==-1)
	{
		printf("Error : Unable to open %s\n",filename);
		return -1;
	}
	else
	{
		while((iRet = read(iFd,&stud,sizeof(stud)))!=0)
		{
			iAdd = iAdd + stud.marks;
		}
	}
	close(iFd);
	return iAdd;
}
