/*
    Problem Statement : Accept number of rows and number of columns from user and display 
                        below pattern. 
        
                        Input :  iRow = 3  iCol = 4  
                        Output : * # * #  
                                 * # * #  
                                 * # * #  
*/

/*
    ALGORITHM
        START
            Accept number of rows from user as row
            Accept number of columns from user as col
            Create one counter as iOuter and initialize it to 1
            Create one counter as iOuter and initialize it to 1
            if row < 0
                then perform row = -row
            if col < 0
                then perform col = -col
            iterate till iOuter <= row
                iterate till iInner <= col
                    if iInner % 2 == 0
                        then print #
                    otherwise print *
                    increament the value of iInner by 1
                continue the iteration 
                increament the value of iOuter by 1
            continue the iteration
        STOP
*/

#include "Header.h"

int main()
{
    int iNo1 = 0,iNo2 = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iNo1);
    printf("Enter number of columns\n");
    scanf("%d",&iNo2);

    Pattern(iNo1,iNo2);

    return 0;
}