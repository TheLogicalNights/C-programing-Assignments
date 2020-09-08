///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Insert
// Parameters    : Address of first pointer , Integer 
// Return Value  : None
// Description   : It takes address of first pointer of linked list and insert integer in the linked list 
// Author        : Swapnil Ramesh Adhav
// Date          : 8th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Insert(PPNODE Head,int iNo)
{
    PNODE NewNode;
    PNODE Temp = *Head;

    NewNode = (PNODE)malloc(sizeof(NODE));
    NewNode -> iData = iNo;
    NewNode -> next = NULL;

    if(*Head==NULL)
    {
        *Head = NewNode;
    }
    else
    {
        while(Temp->next != NULL)
        {
            Temp = Temp -> next;
        }
        Temp -> next = NewNode;
        NewNode -> next = NULL;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SearchFirstOcc
// Parameters    : First pointer , Integer 
// Return Value  : Integer
// Description   : It takes first pointer of linked list and one integer as input and return first occurence of that integer  
// Author        : Swapnil Ramesh Adhav
// Date          : 8th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SearchFirstOcc(PNODE Head,int iNo)
{
    PNODE Temp = Head;
    int iCnt = 1;
    while(Temp != NULL)
    {
        if((Temp -> iData)==iNo)
        {
            break;
        }
        iCnt++;
        Temp = Temp -> next;
    }
    if(Temp==NULL)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}














