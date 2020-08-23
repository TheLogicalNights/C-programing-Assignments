/*
    Problem Statement : Accept number of rows and number of columns from user and display below 
                        pattern. 

                        Input :  iRow = 4  iCol =  4  
                        Output : 1 2 3 4 5 
                                 1 2     5 
                                 1   3   5 
                                 1     4 5 
                                 1 2 3 4 5 
 
*/

/*
    ALGORITHM
        START
            Accept no of rows from user as row
            Accept no of columns from user as col
            Create one counter as iOuter and initialize it to 1
            Create one counter as iInner and initialize it to 1
            iterate till iOuter <= row
                iterate till iInner <= col
                    if iOuter==iInner || iOuter==1 || iInner==1 || iOuter==iRow || iInner==iColumn
                        then print iInner 
                    otherwise print   
                    increament the value of iInner by 1
                continue the iteration
                increament the value of iOuter by 1
            continue the iteration
        STOP
*/

#include "Header.h"

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter the number of rows\n");
    scanf("%d",&iValue1);
    printf("Enter the number of columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    
    return 0;
}