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
// Function Name : DisplayPallindrome
// Parameters    : First pointer
// Return Value  : None
// Description   : it takes first pointer of linked list as input and display pallindrome elements from the linked list
// Author        : Swapnil Ramesh Adhav
// Date          : 10th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayPallindrome(PNODE Head)
{
    int iElement = 0;
    int iTemp = 0;
    int iDigit = 0;

    while(Head!=NULL)
    {
        iElement = 0;
        iTemp = Head->iData;
        while(Head->iData!=0)
        {
            iDigit = Head->iData % 10;
            iElement = ((iElement * 10) + (iDigit));
            Head->iData = Head->iData / 10;
        }
        if(iElement==iTemp)
        {
            printf("%d\t",iElement);
        }    
        Head = Head->next;
    }
    printf("\n");
}













