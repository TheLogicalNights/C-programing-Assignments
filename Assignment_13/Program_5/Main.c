/*
    Problem Statement : Accept number from user and display below pattern. 

                        Input :  8 
                        Output : 2 4 6 8 10 12 14 16 

*/

/*
    ALGORITHM
        START
            Accept one number from user as no
            Create one counter as iCnt
            if no < 0
                then perform no = -no
            iterate till iCnt <= no
                print 2 * iCnt
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