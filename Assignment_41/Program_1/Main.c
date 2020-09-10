/*
    Problem Statement : Write a program which reverse each element of singly linked list.

                        Function Prototype : void Reverse( PNODE Head);

                        Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
                        Output : |11|->|82|->|71|->|14|->|6|->|98|
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

    Reverse(First);

    return 0;
}