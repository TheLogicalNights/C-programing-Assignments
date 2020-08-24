/*
    Problem Statement : Accept N numbers from user and accept one another number as NO ,
                        check whether NO is present or not.
                        
                        Input :
                        N : 6
                        NO: 66
                        Elements : 85 66 3 66 93 88

                        Output :  TRUE

                        N : 6
                        NO: 12
                        Elements : 85 11 3 15 11 111

                        Output :  FALSE
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    int *ptr = NULL;
    int iCnt = 0;
    BOOL bRet = FALSE;
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

    bRet = Frequency(ptr,iValue,iNo);

    if(bRet==TRUE)
    {
        printf("%d is Present\n",iNo);
    }
    else if(bRet==ERROR)
    {
        printf("Error : Something went wrong please try again.....\n");
    }
    else
    {
        printf("%d is not present\n",iNo);
    }
    
    free(ptr);
    
    return 0;
}