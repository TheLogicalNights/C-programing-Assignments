///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Insert
// Parameters    : Address of first Pointer , Integer
// Return Value  : None
// Description   : Used to insert integer into the linked list
// Author        : Swapnil Ramesh Adhav
// Date          : 8th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Insert(PPNODE Head,int iNo)
{
    PNODE NewNode = NULL;
    PNODE Temp = *Head;
    PNODE node = *Head;

    NewNode = (PNODE)malloc(sizeof(NODE));
    NewNode->iData = iNo;
    NewNode->next = NULL;

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
// Function Name : Minimum
// Parameters    : first Pointer , Integer
// Return Value  : Integer
// Description   : it takes first node as input and return smallest element from that linked list
// Author        : Swapnil Ramesh Adhav
// Date          : 8th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Minimum(PNODE Head)
{
    PNODE Temp = Head;
    int iMin = Temp->iData;

    while(Temp!= NULL)
    {
        if(Temp->iData < iMin)
        {
            iMin = Temp->iData;
        }
        Temp = Temp->next;
    }
    
    return iMin;
}