/*
    Problem Statement : Accept number of rows and number of columns from user and display 
                        below pattern. 
                    
                        Input :  iRow = 4  iCol = 4  
                        Output : 2 4 6 8 10 
                                 1 3 5 7 9 
                                 2 4 6 8 10 
                                 1 3 5 7 9 
 
 


*/

/*
    ALGORITHM
        START
            Accept number of rows from user as row 
            Accept number of columns from user as col
            Create one counter as iOuter and initialize it to row
            Create one counter as iInner and initialize it to 1
            Create one counter iDisp and Initialize it to 1
            if row < 0
                then perform row = -row
            if col < 0
                then perform col = -col
            iterate till iOuter <= row
                iterate till iInner < col*2
                    if iOuter % 2 == 0
                        if iInner % 2 == 0
                            then print iInner
                    otherwise if iOuter % 2 != 0
                                then if iInner % 2 != 0      
                                    then print iInner
                    increament the value of iDisp by 1
                    increament the value of iInner by 1
                continue the iteration
                decreament the value of iOuter by 1
            continue the iteration
        STOP 
*/

#include "Header.h"

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows\n");
    scanf("%d",&iValue1);
    printf("Enter the number of columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    
    return 0;
}