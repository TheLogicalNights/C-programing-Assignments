///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Parameters    : String
// Return Value  : None
// Description   : It takes filename as input and display all the contents of that file
// Author        : Swapnil Ramesh Adhav
// Date   	 : 25th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Display(char *filename)
{
	struct Student stud;
	int iFd = 0;
	int iRet = 0;
	int i = 0;
	int iLine = 0;
	
	char data[120] = {'\0'};
	char ch = '\0';
	
	iFd = open(filename,O_RDONLY);
	if(iFd==-1)
	{
		printf("Error : Unable to open %s\n",filename);
		return ;
	}
	else
	{
		while((iRet = read(iFd,&stud,sizeof(stud))) != 0)
		{
			printf("Student Name : %s\n",stud.name);
			printf("Roll no : %d\n",stud.rollno);
			printf("Marks : %d\n\n",stud.marks);			
		}
	}
}
