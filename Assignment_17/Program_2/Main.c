/*
    Problem Statement : Accept number of rows and number of columns from user and display below 
                        pattern. 

                        Input :  iRow = 4  iCol = 4  
                        Output : * * * * 
                                 * * * # 
                                 * * # # 
                                 * # # # 

*/

/*
    ALGORITHM
        START
            Accept number of rows from user as row
            Accept number of columns from user as column
            Create one counter as iOuter and initialize it to row
            Create one counter as iInner and initialize it to column
            if row<0
                then perform row = -row
            if column < 0
                then perform column = -column
            if row -= column
                then return
            iterate till iOuter >= 1
                iterate till iInner >= 1
                    if iOuter == iInner or iOuter > iInner
                        then print #
                    otherwise print *
                    decreament the value of iInner by 1
                continue the iteration
                decreament the value of iOuter by 1
            continue iteration
        STOP
*/

#include "Header.h"

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iValue1);
    printf("Enter number of columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    
    return 0;
}