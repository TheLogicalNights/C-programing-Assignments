/*
    Problem Statement : Accept N numbers from user and return product of all odd elements.
                        
                        Input :
                        N : 6

                        Elements : 15 66 3 70 10 88
                        Output :  45

                        Input :
                        N : 6
                        Elements : 44 66 72 70 10 88
                        Output :  4
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

    iRet = Product(ptr,iValue);

    if(iRet<0)
    {
        printf("Error : Something went wrong please try again.....\n");
    }
    else
    {
        printf("Product is : %d\n",iRet);
    }
        
    free(ptr);
    
    return 0;
}