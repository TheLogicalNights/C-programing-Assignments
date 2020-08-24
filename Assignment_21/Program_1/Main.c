/*
 	Problem Statement : Accept N numbers from user and return difference between summation
			    of even elements and summation of odd elements.

				Input :
				N :
				6
				Elements : 85 53 66 3 80 93 88 
				Output : (234 - 181)
 */

#include "Header.h"

int main()
{
	int iValue = 0;
	int *ptr = NULL;
	int iCnt = 0;
	BOOL iRet = FALSE;
	int iDifference = 0;
	printf("Enter how many elements\n");
	scanf("%d",&iValue);

	ptr = (int *)malloc(sizeof(int) * iValue);

	if(ptr==NULL)
	{
		printf("Error : Unable to allocate memory\n");
		return -1;
	}

	printf("Enter Elements\n");
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	iRet = Difference(ptr,iValue,&iDifference);

	if(iRet==FALSE)
	{
		printf("Error : Invalid Input\n");
	}
	else
	{
		printf("Difference is : %d\n",iDifference);
	}
	return 0;
}
