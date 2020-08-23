/*
    Problem Statement : Accept number of rows and number of columns from user and display below 
                        pattern. 

                        Input :  iRow = 4  iCol = 4  
                        Output : * * * # 
                                 * * # @  
                                 * # @ @  
                                 # @ @ @ 


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
                    if iOuter == iInner
                        then print # 
                    otherwise if iInner > iOuter
                                then print @
                    otherwise print * 
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