/*
    Problem Statement : Accept number of rows and number of columns from user and display below 
                        pattern. 

                        Input :  iRow = 6  iCol = 6  
                        Output : * * * * * * 
                                 *       * * 
                                 *     *   * 
                                 *   *     * 
                                 * *       * 
                                 * * * * * * 
*/

/*
    ALGORITHM
        START
            Accept no of rows from user as row
            Accept no of columns from user as col
            Create one counter as iOuter and initialize it to row
            Create one counter as iInner and initialize it to 1
            iterate till iOuter >= 1
                iterate till iInner <= col
                    if iOuter==iInner || iOuter==1 || iInner==1 || iOuter==iRow || iInner==iColumn
                        then print * 
                    otherwise if iOuter<iRow && iOuter>2 && iInner<iColumn-2 && iInner>1
                                then print #
                    otherwise print $ 
                    increament the value of iInner by 1
                continue the iteration
                decreament the value of iOuter by 1
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