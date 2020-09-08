/*
    Problem Statement : Write a program which returns addition of all even element from singly
                        linear linked list.
                        
                        Function Prototype :int AdditionEven( PNODE Head);
                        
                        Input linked list : |11|->|20|->|32|->|41|
                        
                        Output : 52
*/

#include "Header.h"

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    Insert(&First,11);
    Insert(&First,20);
    Insert(&First,32);
    Insert(&First,41);

    iRet = AddEven(First);

    printf("Addition of Even numbers is : %d\n",iRet);

    return 0;
}