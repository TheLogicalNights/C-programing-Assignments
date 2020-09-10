///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : InsertLast
// Parameters    : Address of First pointer , Integer
// Return Value  : None
// Description   : it takes address of first pointer of linked list,Integer as input and insert that integer at the last position of linked list
// Author        : Swapnil Ramesh Adhav
// Date          : 10th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void InsertLast(PPNODE Head,int iNo)
{
    PNODE NewNode = NULL;
    PNODE Temp = *Head;

    NewNode = (PNODE)malloc(sizeof(NODE));
    NewNode->iData = iNo;
    NewNode->next = NULL;

    if(*Head==NULL)
    {
        *Head = NewNode;
    }
    else
    {
        while(Temp->next!=NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = NewNode;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplaySmall
// Parameters    : First pointer
// Return Value  : None
// Description   : it takes first pointer of linked list and display small digits of all elements of linked list
// Author        : Swapnil Ramesh Adhav
// Date          : 10th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplaySmall(PNODE Head)
{
    int iDigit = 0;
    int iMin = 0;
    while(Head!=NULL)
    {
        iDigit = Head->iData % 10;
        iMin = iDigit;
        while(Head->iData!=0)
        {
            iDigit = Head->iData % 10;
            if(iDigit<iMin)
            {
                iMin = iDigit;
            }
            Head->iData = Head->iData / 10;
        }
        printf("%d\t",iMin);
        Head = Head->next;
    }
    printf("\n");
}