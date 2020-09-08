///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Insert
// Parameters    : Address of first pointer , Integer
// Return Value  : None
// Description   : it used to insert integer into Linked List
// Author        : Swapnil Ramesh Adhav
// Date          : 8th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Insert(PPNODE Head,int iNo)
{
    PNODE NewNode = NULL;
    PNODE Temp = *Head;

    NewNode = (PNODE)malloc(sizeof(NODE));
    NewNode->iData=iNo;
    NewNode->next=NULL;

    if(*Head==NULL)
    {
        *Head = NewNode;
    }
    else
    {
        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = NewNode;
        NewNode->next = NULL;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : AddEven
// Parameters    : first pointer , Integer
// Return Value  : None
// Description   : it used to perform addition of even numbers from Linked List
// Author        : Swapnil Ramesh Adhav
// Date          : 8th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int AddEven(PNODE Head)
{
    PNODE Temp = Head;
    int iSum = 0;

    while(Temp != NULL)
    {
        if((Temp->iData%2)==0)
        {
            iSum = iSum + Temp->iData;
        }
        Temp = Temp->next;
    }
    return iSum;
}








