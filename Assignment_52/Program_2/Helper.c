///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Parameters    : String
// Return Value  : None
// Description   : It takes filename as input and display only information of that student having lowest marks from file
// Author        : Swapnil Ramesh Adhav
// Date          : 27th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Display(char *filename)
{
	int iFd = 0;
	int iRet = 0;
	int iMarks = 101;
	
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
			if(stud.marks<iMarks)
			{
				iMarks = stud.marks;
			}
		}
		close(iFd);
	}
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
			if(stud.marks==iMarks)
			{
				printf("Student name : %s\n",stud.name);
				printf("Roll no : %d\n",stud.rollno);
				printf("Marks : %d\n",stud.marks);
			}
		}
	}
	close(iFd);
}
