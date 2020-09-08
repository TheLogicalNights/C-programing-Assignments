/*
    Problem Statement : Write a program which search last occurrence of particular element from
                        singly linear linked list.
                        Function should return position at which element is found.

                        Function Prototype :int SearchLastOcc( PNODE Head, int no );
                        Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|

                        Input element : 30

                        Output : 6

*/

#include "Header.h"

int main()
{
    PNODE First = NULL;
    int iRet = 0,iNo = 0;

    Insert(&First,10);
    Insert(&First,20);
    Insert(&First,30);
    Insert(&First,40);
    Insert(&First,50);
    Insert(&First,30);
    Insert(&First,70);
    Insert(&First,80);

    printf("Enter a Number that you want to search\n");
    scanf("%d",&iNo);

    iRet = SearchLastOcc(First,iNo);

    if(iRet==-1)
    {
        printf("No such Element present in Linked list\n");
    }
    else
    {
        printf("Last Occurence is : %d\n",iRet);
    }

    return 0;

}