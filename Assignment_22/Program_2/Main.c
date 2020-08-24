/*
    Problem Statement : Accept N numbers from user and return difference between frequency of
                        even number and odd numbers.
                        N : 7
                        Elements : 85 66 3 80 93 88 90

                        Output :  1 (4-3)
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    int *ptr = NULL;
    int iCnt = 0;
    BOOL iRet = FALSE;
    int iDiff = 0;

    printf("Enter how many elements\n");
    scanf("%d",&iValue);

    if(iValue<=0)
    {
        printf("Error : Invalid Size\n");
        return -1;
    }
    
    ptr = (int *)malloc(sizeof(int) * iValue);

    if(ptr==NULL)
    {
        printf("Error : Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the elements\n");
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr,iValue,&iDiff);

    if(iRet==TRUE)
    {
        printf("Difference between even and odd frequencies are : %d\n",iDiff);
    }
    else
    {
        printf("Error : Something went wrong please try again......\n");
    }
    free(ptr);
    
    return 0;
}