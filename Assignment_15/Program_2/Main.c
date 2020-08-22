/*
    Problem Statement : Accept number of rows and number of columns from user and display 
                        below pattern. 
                    
                        Input :  iRow = 4  iCol = 4  
                    
                        Output : A B C D 
                                 a b c d 
                                 A B C D 
                                 a b c d 

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
                    if iOuter % 2 == 0
                        then print character with ascii value(97) + iInner
                    otherwise print character with ascii value(65) + iInner
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