/*
    Problem Statement : Accept number of rows and number of columns from user and display 
                        below pattern. 
                    
                        Input :  iRow = 5  iCol = 5  
                        Output : a b c d e 
                                 1 2 3 4 5 
                                 a b c d e 
                                 1 2 3 4 5 
                                 a b c d e 
 
 
 


*/

/*
    ALGORITHM
        START
            Accept number of rows from user as row 
            Accept number of columns from user as col
            Create one counter as iOuter and initialize it to 1
            Create one counter as iInner and initialize it to 1
            if row < 0
                then perform row = -row
            if col < 0
                then perform col = -col
            iterate till iOuter <= row
                iterate till iInner <= col
                    if iOuter % 2 == 0
                        then print iInner
                    otherwise print character with ascii value(97)+iInner-1
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