///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Insert
// Parameters    : String , Integer
// Return value  : BOOL
// Description   : It takes file name and number of students as input and write information of that much students into the file
// Author        : Swapnil Ramesh Adhav
// Date          : 25th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL Insert(char *filename,int iNo)
{
	struct Student stud;
	
	int iFd = 0;	
	int iCnt = 0;
	int iLen = 0;
	
	char data[256] = {'\0'};
	
	iFd = open(filename,O_WRONLY|O_APPEND);
	
	if(iFd==-1)
	{
		return FALSE;
	}
	else
	{
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			printf("Enter name of student\n");
			scanf(" %[^'\n']s",stud.name);
			
			printf("Enter roll no. of student\n");
			scanf(" %d",&stud.rollno);
			
			printf("Enter marks of student\n");
			scanf(" %d",&stud.marks);
						
			write(iFd,&stud,sizeof(stud));
		}
		close(iFd);
		return TRUE;
	}
}
