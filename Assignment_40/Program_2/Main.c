/*
    Problem Statement : Write a program which displays all elements which are prime from singly
                        linear linked list.

                        Function Prototype :void DisplayPrime( PNODE Head);

                        Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
                        Output : 6 28
*/

#include "Header.h"

int main()
{
    PNODE First = NULL;

    Insert(&First,11);
    Insert(&First,20);
    Insert(&First,17);
    Insert(&First,41);
    Insert(&First,22);
    Insert(&First,89);

    DisplayPrime(First);

    return 0;
}
