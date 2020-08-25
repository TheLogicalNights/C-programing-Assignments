/*
    Problem Statement : Accept N numbers from user and return the largest number.
                        
                        Input :
                        N : 6
                        Elements : 85 66 3 66 93 88
                        Output :  93
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

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

    iRet = Maximum(ptr,iValue);

    printf("Largest Number is : %d\n",iRet);
        
    free(ptr);
    
    return 0;
}