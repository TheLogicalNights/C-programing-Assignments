/*
    Problem Statement : Accept N numbers from user and display all such elements which are
                        even and divisible by 5.

                        Input :
                        N : 6
                        Elements : 85 66 3 80 93 88
                        Output : 80

*/

#include "Header.h"

int main()
{
    int iValue = 0;
    int *Arr = NULL;
    int iCnt = 0;
    printf("Enter the number of elements\n");
    scanf("%d",&iValue);

    Arr = (int *)malloc(sizeof(int) * iValue);

    if(Arr==NULL)
    {
        printf("Error : Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements\n");
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    Display(Arr,iValue);

    return 0;
}