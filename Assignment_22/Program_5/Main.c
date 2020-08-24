/*
    Problem Statement : Accept N numbers from user and accept one another number as NO ,
                        return frequency of NO form it.
                        
                        Input :
                        N : 6
                        NO: 66
                        Elements : 85 66 3 66 93 88

                        Output :  2

                        N : 6
                        NO: 12
                        Elements : 85 11 3 15 11 111

                        Output :  0
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;
    int iNo = 0;

    printf("Enter how many elements\n");
    scanf("%d",&iValue);

    printf("Enter the number\n");
    scanf("%d",&iNo);

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

    iRet = Frequency(ptr,iValue,iNo);

    if(iRet>=0)
    {
        printf("Frequency of %d is : %d\n",iNo,iRet);
    }
    else
    {
        printf("Error : Something went wrong please try again.....\n");
    }
    
    free(ptr);
    
    return 0;
}