/*
    Problem Statement : Accept number of rows and number of columns from user and display 
                        below pattern. 
                    
                        Input :  iRow = 3  iCol = 5  
                        Output : A A A A A 
                                 B B B B B 
                                 C C C C C 
 

*/

/*
    ALGORITHM
        START
            Accept number of rows from user as row 
            Accept number of columns from user as col
            Create one counter as iOuter and initialize it to 0
            Create one counter as iInner and initialize it to 0
            if row < 0
                then perform row = -row
            if col < 0
                then perform col = -col
            iterate till iOuter <= row
                iterate till iInner < col
                    then print character with ascii value(65) + iOuter
                    increament the value of iInner
                continue the iteration
                increament the value of iOuter
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