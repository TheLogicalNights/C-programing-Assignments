/*
    Problem Statement : Accept number of rows and number of columns from user and display 
                        below pattern. 

                        Input :  iRow = 3  iCol =  4  
                        Output : 1 1 1 1  
                                 2 2 2 2 
                                 3 3 3 3 
                                 4 4 4 4   

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
            iterate till iOutrt <= row
                iterate till iInner <= col
                    print iOuter
                    increament the value of iInner by 1
                continue the iteration 
                increament the value of iOuter by 1
            continue the iteration
        STOP
*/

#include "Header.h"

int main()
{
    int iNo1=0,iNo2=0;

    printf("Enter the number of rows\n");
    scanf("%d",&iNo1);
    printf("Enter the number of columns\n");
    scanf("%d",&iNo2);

    Pattern(iNo1,iNo2);
    
    return 0;
}