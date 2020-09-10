/*
    Problem Statement : Write a program which display all palindrome elements of singly linked
                        list.

                        Function Prototype : void DisplayPallindrome( PNODE Head);

                        Input linked list : |11|->|28|->|17|->|414|->|6|->|89|
                        Output : 11 6 414
*/

#include "Header.h"

int main()
{
    PNODE First = NULL;
    int iNo = 0,iCnt = 0,iElement = 0;
    
    printf("How mainy elements do you want ?\n");
    scanf("%d",&iNo);

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("Enter %d number\n",iCnt);
        scanf("%d",&iElement);
        InsertLast(&First,iElement);
    }
    
    DisplayPallindrome(First);

    return 0;
}