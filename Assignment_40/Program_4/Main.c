/*
    Problem Statement : Write a program which returns second maximum element from singly
                        linear linked list.
                        
                        Function Prototype :int SecondMax( PNODE Head);
                        
                        Input linked list : |110|->|230|->|320|->|240|
                        
                        Output : 240
*/

#include "Header.h"

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    Insert(&First,110);
    Insert(&First,230);
    Insert(&First,320);
    Insert(&First,240);

    iRet = SecondMax(First);

    printf("Second Maximum number is : %d\n",iRet);

    return 0;
}
