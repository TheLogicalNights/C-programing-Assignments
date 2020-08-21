/*
    Problem Statement : Accept number from user and display below pattern. 
                        
                        Input :  4 
                        Output : # 1 * # 2 * # 3 * # 4 *  

*/

/*
    ALGORITHM
        START
            Accept one number from user as no
            Create one counter as iCnt initialize it to 1
            if no < 0
                then perform no = -no
            iterate till iCnt <= no
                print # no *
                increament the value of iCnt
            continue the iteration
        STOP
*/

#include "Header.h"

int main()
{
    int iNo = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    Pattern(iNo);
    
    return 0;
}