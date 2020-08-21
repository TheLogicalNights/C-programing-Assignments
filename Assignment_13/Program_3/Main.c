/*
    Problem Statement : Accept number from user and display below pattern. 

                        Input :  5  
                        Output : 1 * 2 * 3 * 4 * 5 *  

*/

/*
    ALGORITHM
        START
        Accept one number from user as no
        Create one counter as iCnt and initialize it to 1
        if no < 0
            then perform no = -no
        iterate till iCnt <= no
            print iCnt *
            increament the value of iCnt
        continue the iteration 
        STOP
*/

#include "Header.h"

int main()
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return 0;
}