/*
    Problem Statement : Accept single digit number from user and print it into word.  
                        
                        Input : 9  
                        Output : Nine 

                        Input : -3 
                        Output : Three  

                        Input : 12 
                        Output : Invalid Number 

*/

/*
    ALGORITHM
        START
            Accept one number from user as no
            if no < 0
                then perform no = -no
            if no == 1 then print one
            if no == 2 then print two
            if no == 3 then print three
            if no == 4 then print four
            if no == 5 then print five
            if no == 6 then print six
            if no == 7 then print seven
            if no == 8 then print eight
            if no == 9 then print nine
            otherwise print Invalid input
        STOP
*/

#include "Header.h"

int main()
{
    int iNo = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    Display(iNo);
    
    return 0;
}