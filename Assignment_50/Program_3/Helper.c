///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Parameters    : String
// Return Value  : None
// Description   : It takes filename as input and display only name of students from file
// Author        : Swapnil Ramesh Adhav
// Date          : 25th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Display(char *filename)
{
	int iFd = 0;
	int iRet = 0;
	
	struct Student stud;

	iFd = open(filename,O_RDONLY);
	if(iFd==-1)
	{
		printf("Error : Unable to open %s\n",filename);
		return ;
	}
	else
	{
		while((iRet = read(iFd,&stud,sizeof(stud)))!=0)
		{
			printf("Student name : %s\n",stud.name);
		}
	}
	close(iFd);
}
