/*
    Problem Statement : Accept number of rows and number of columns from user and display below 
                        pattern. 
                        
                        Input :  iRow = 4  iCol = 4  
                        Output : * * * * 
                                 * * * 
                                 * *  
                                 *  

*/

/*
    ALGORITHM
        START
            Accept no of rows from user as row
            Accept no of columns from user as col
            Create one counter as iOuter and initialize it to 
        STOP
*/

#include "Header.h"

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter no of rows\n");
    scanf("%d",&iValue1);
    printf("Enter no of rows\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}