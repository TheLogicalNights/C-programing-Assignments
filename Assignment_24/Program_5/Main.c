/*
    Problem Statement : Accept N numbers from user and display summation of digits of each
                        number.
                        
                        Input :
                        N : 6
                        Elements : 8225 665 3 76 953 858
                        Output :  17 17 3 13 17 21
*/

#include "Header.h"

int main()
{
    int iValue = 0;
    int *ptr = NULL;
    int iCnt = 0;

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

    DigitSum(ptr,iValue);
        
    free(ptr);
    
    return 0;
}