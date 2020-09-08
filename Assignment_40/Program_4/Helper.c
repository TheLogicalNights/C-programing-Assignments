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
// Function Name : SecondMax
// Parameters    : first pointer , Integer
// Return Value  : None
// Description   : it used to find second maximum number from Linked List
// Author        : Swapnil Ramesh Adhav
// Date          : 8th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SecondMax(PNODE Head)    //240  230   320  24
{
    PNODE Temp = Head;

    int iMax = 0;   
    int iSecMax = 0;    

    while(Temp != NULL)
    {
        if((Temp->iData)>iMax)
        {
            iSecMax = iMax;
            iMax = Temp->iData;
        }
        if((Temp->iData<iMax) && (Temp->iData>iSecMax))
        {
            iSecMax = Temp->iData;
        }        
        Temp = Temp->next;
    }
    return iSecMax;
}








