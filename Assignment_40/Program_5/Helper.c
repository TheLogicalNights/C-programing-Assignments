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
// Function Name : SumDigit
// Parameters    : first pointer , Integer
// Return Value  : None
// Description   : it used to Display sum of digits of elements from Linked List
// Author        : Swapnil Ramesh Adhav
// Date          : 8th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SumDigit(PNODE Head)  
{
    PNODE Temp = Head;
    int iNum = 0;
    int iSum = 0;

    printf("Sum of digits is :\t");

    while(Temp != NULL)
    {
        iSum = 0;
        while(Temp->iData!=0)
        {
            iNum = Temp->iData % 10;
            iSum = iSum + iNum;
            Temp->iData = Temp->iData / 10;
        }
        printf("%d\t",iSum);
        Temp = Temp->next;
    }
    printf("\n");
}