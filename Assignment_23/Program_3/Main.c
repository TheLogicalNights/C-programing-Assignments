/*
    Problem Statement : Accept N numbers from user and accept Range, Display all elements from
                        that range
                        
                        Input :
                        N : 6
                        START : 60
                        END   : 90
                        Elements : 85 66 3 76 93 88

                        Output :  85 66 76 88

                        Input :
                        N : 6
                        START : 30
                        END   : 50
                        Elements : 85 66 3 76 93 88

                        Output : 
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue1 = 0, iValue2 = 0;

    printf("Enter how many elements\n");
    scanf("%d",&iNo);

    printf("Enter the starting number of range\n");
    scanf("%d",&iValue1);

    printf("Enter the ending number of range\n");
    scanf("%d",&iValue2);

    if(iNo<=0)
    {
        printf("Error : Invalid Size\n");
        return -1;
    }
    
    ptr = (int *)malloc(sizeof(int) * iNo);

    if(ptr==NULL)
    {
        printf("Error : Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the elements\n");
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iNo,iValue1,iValue2);

    free(ptr);
    
    return 0;
}