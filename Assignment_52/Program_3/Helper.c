///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Average
// Parameters    : String
// Return Value  : Integer
// Description   : It takes filename as input and return the average of marks of students
// Author        : Swapnil Ramesh Adhav
// Date          : 27th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

float Average(char *filename)
{
	int iFd = 0;
	int iRet = 0;
	int iSum = 0;
	float iAverage = 0;
	int iTotal = 0;
	
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
			iSum = iSum + stud.marks;
			iTotal++;
		}
		iAverage = (float)iSum / (float)iTotal;
		close(iFd);
		return iAverage;
	}
}
