/*
    Problem Statement : Accept number from user and display below pattern. 

                        Input :  5  
                        Output : 5 # 4 # 3 # 2 # 1 #  

*/

/*
    ALGORITHM
        START
            Accept one number from user as no
            Create one counter as iCnt and initialize it to no
            if no < 0
                then perform no = -no
            iterate till iCnt >= 1
                print iCnt #
                increament the value of counter
            contine the iteration
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