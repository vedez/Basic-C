/*
Description:
    Find the sum of all odd numbers in the range of 1-99.
*/

#include <stdio.h>

/*MAIN*/
int main(void) {
    /*Initiliasing Variables*/
    int sum = 0;

    //Adding all odd numbers
    //Check if odd and add it to total // Test:  //printf(">>%d\n**%d", sum, i);
    for(int i = 1; i <= 99; i++) if(i%2 == 1) sum += i; //Q Notes: One or two? (;) Both works.

    //Display total
    printf("Total: %d", sum);
}