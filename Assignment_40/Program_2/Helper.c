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
// Function Name : DisplayPrime
// Parameters    : first pointer , Integer
// Return Value  : None
// Description   : it used to Display perfect numbers from Linked List
// Author        : Swapnil Ramesh Adhav
// Date          : 8th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayPrime(PNODE Head)
{
    PNODE Temp = Head;
    int iCnt = 0;
    int iFact = 0;

    printf("Pime numbers are : ");

    while(Temp != NULL)
    {
        iFact = 0;
        for(iCnt=1;iCnt<=((Temp->iData)/2);iCnt++)
        {
            if((Temp->iData % iCnt)==0)
            {
                iFact++;
            }
        }
        if(iFact==1)
        {
            printf("%d\t",Temp->iData);
        }
        Temp = Temp->next;
    }
    printf("\n");
}








