/*
    Problem Statement : Write a program which search first occurrence of particular element from
                        singly linear linked list.
                        Function should return position at which element is found.
                        
                        Function Prototype : int SearchFirstOcc( PNODE Head , int no );

                        Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|

                        Input element : 30
                        Output : 3

*/

#include "Header.h"

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iNo = 0;

    Insert(&First,10);
    Insert(&First,20);
    Insert(&First,30);
    Insert(&First,40);
    Insert(&First,50);
    Insert(&First,30);
    Insert(&First,70);

    printf("Enter a number that you want to search\n");
    scanf("%d",&iNo);

    iRet = SearchFirstOcc(First,iNo);

    if(iRet==-1)
    {
        printf("No such element present in Linked List\n");
    }
    else
    {
        printf("Element found at position : %d\n",iRet);
    }

    return 0;
}