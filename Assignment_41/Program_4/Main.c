/*
    Problem Statement : Write a program which display smallest digits of all element from singly
                        linear linked list.
                        
                        Function Prototype : void DisplaySmall( PNODE Head);
                        
                        Input linked list : |11|->|250|->|532|->|415|
                        Output : 1 0 2 1
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

    DisplaySmall(First);

    return 0;
}