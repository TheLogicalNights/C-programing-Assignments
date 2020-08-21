/*
    Problem Statement : Accept number of rows and number of columns from user and display 
                        below pattern. 

                        Input :  iRow = 4  iCol = 3  
                        Output : 1 2 3 
                                 1 2 3 
                                 1 2 3 
                                 1 2 3 

*/

/*
    ALGORITHM
        START
            Accept number of rows from user as row
            Accept number of columns from user as col
            if row < 0
                then perform row = -row
            if col < 0
                then perform col = -col
                Create one counter as iOuter and initialize it to 1
            Create one counter as iInner and initialize it to 1
            iterate till iOuter <= row
                itereate till iInner <= col
                    print iInner
                    increament the value of iInner
                continue the iteration
                increament the value of iOuter
            continue the iteration
        STOP
*/

#include "Header.h"

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter the number of rows\n");
    scanf("%d",&iValue1);
    printf("Enter the number of colimns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}