/*
    Problem Statement : Write a program which returns addition of all element from singly linear
                        linked list.

                        Function Prototype :int Addition( PNODE Head);

                        Input linked list : |10|->|20|->|30|->|40|
                        Output : 100
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
    
    iRet = Addition(First);

    printf("Addition is : %d\n",iRet);

    return 0;
}

