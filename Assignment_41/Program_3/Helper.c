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
// Function Name : DisplayProduct
// Parameters    : First pointer
// Return Value  : None
// Description   : it takes first pointer of linked list and display product of all digits of all elements of linked list
// Author        : Swapnil Ramesh Adhav
// Date          : 10th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayProduct(PNODE Head)
{
    int iDigit = 0;
    int iProduct = 1;
    while(Head!=NULL)
    {
        iProduct = 1;
        while(Head->iData!=0)
        {
            iDigit = Head->iData % 10;
            if(iDigit == 0)
            {
                iDigit = 1;
            }
            iProduct = iProduct * iDigit;
            Head->iData = Head->iData / 10;
        }
        printf("%d\t",iProduct);
        Head = Head->next;
    }
    printf("\n");
}