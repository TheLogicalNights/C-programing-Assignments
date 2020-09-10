/*
    Problem Statement : Write a program which display product of all digits of all element from
                        singly linear linked list. (Don’t consider 0)

                        Function Prototype : void DisplayProduct( PNODE Head);

                        Input linked list : |11|->|20|->|32|->|41|
                        Output : 1 2 6 4
*/

#include "Header.h"

int main()
{
    PNODE First = NULL;
    int iNo = 0,iCnt = 0,iElement = 0;

    printf("How many elements do you want ?\n");
    scanf("%d",&iNo);

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("Enter %d number\n",iCnt);
        scanf("%d",&iElement);
        InsertLast(&First,iElement);
    }

    DisplayProduct(First);

    return 0;
}