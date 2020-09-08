/*
    Problem Statement : Write a program which return smallest element from singly linear linked
                        list.
                        Function Prototype :int Maximum( PNODE Head);
                        
                        Input linked list : |110|->|230|->|320|->|240|
                        
                        Output : 320
*/

#include "Header.h"

int main()
{
    PNODE First = NULL;
    int iRet = 0,iNo = 0;

    Insert(&First,110);
    Insert(&First,230);
    Insert(&First,20);
    Insert(&First,240);
    Insert(&First,640);
    
    iRet = Minimum(First);

    printf("Smallest element is : %d\n",iRet);

    return 0;
}
