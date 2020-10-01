///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Parameters    : String
// Return Value  : None
// Description   : It takes filename as input and display information according to first class, second class and pass class.
// Author        : Swapnil Ramesh Adhav
// Date          : 27th Sept 2020
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
			if((stud.marks>60) && (stud.marks<=100))
			{
				printf("Student Name : %s\n",stud.name);
				printf("Roll no : %d\n",stud.rollno);
				printf("Marks : %d\n",stud.marks);
				printf("Result : First Class\n");
			}
			if((stud.marks>50) && (stud.marks<=60))
			{
				printf("Student Name : %s\n",stud.name);
				printf("Roll no : %d\n",stud.rollno);
				printf("Marks : %d\n",stud.marks);
				printf("Result : Second Class\n");
			}
			if((stud.marks>0) && (stud.marks<=50))
			{
				printf("Student Name : %s\n",stud.name);
				printf("Roll no : %d\n",stud.rollno);
				printf("Marks : %d\n",stud.marks);
				printf("Result : Pass Class\n");
			}
		}
		
	}
}
