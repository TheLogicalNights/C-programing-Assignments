/*
    Problem Statement : Accept number from user and display below pattern. 

                        Input :  5  
                        Output : A B C D E 

*/

/*
    ALGORITHM
        START
            Accept one number from user as no
            Create one counter and initialize it to 0
            if no < 0
                then perform no = -no
            iterate till counter < no
                print character with its ascii value + counter
                increament the value of counter
            continue the iteration
        STOP
*/

#include "Header.h"

int main()
{
    int iValue = 0;

    printf("Enter number of elements\n");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return 0;
}