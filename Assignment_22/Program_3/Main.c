/*
    Problem Statement : Accept N numbers from user check whether that numbers contains 11 in
                        it or not.
                        Input :
                        N : 6
                        Elements : 85 66 11 55 93 88

                        Output :  11 is present
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    int *ptr = NULL;
    int iCnt = 0;
    BOOL bRet = FALSE;
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

    bRet = Check(ptr,iValue);

    if(bRet==TRUE)
    {
        printf("11 is Present\n");
    }
    else if(bRet==ERROR)
    {
        printf("Error : Something went wrong please try again.....\n");
    }
    else
    {
        printf("11 is not present\n");
    }

    free(ptr);
    
    return 0;
}