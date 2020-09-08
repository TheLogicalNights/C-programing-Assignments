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
// Function Name : SearchLastOcc
// Parameters    : first Pointer , Integer
// Return Value  : Integer
// Description   : it takes first node and one integer as input and return last occurence of that integer from that linked list
// Author        : Swapnil Ramesh Adhav
// Date          : 8th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int SearchLastOcc(PNODE Head,int iNo)
{
    int iCnt = 1;
    int iPos = 0;
    PNODE Temp = Head;

    while(Temp!= NULL)
    {
        if(Temp->iData==iNo)
        {
            iPos = iCnt;
        }
        Temp = Temp->next;
        iCnt++;
    }
    if(iPos==0)
    {
        return -1;
    }
    else
    {
        return iPos;
    }
}

















