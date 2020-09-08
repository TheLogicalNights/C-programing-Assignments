/*
    Problem Statement : Write a program which display addition of digits of element from singly
                        linear linked list.

                        Function Prototype :void SumDigit( PNODE Head);

                        Input linked list : |110|->|230|->|20|->|240|->|640|
                        Output : 2 5 2 6 10
*/

#include "Header.h"

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    Insert(&First,110);
    Insert(&First,230);
    Insert(&First,20);
    Insert(&First,240);
    Insert(&First,640);

    SumDigit(First);

    return 0;
}