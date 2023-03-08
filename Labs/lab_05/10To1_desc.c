/*
Description:
    This program should display the numbers 1 to 10 in descending order on the same line and is separated by a comma.
    ex. 10,9,8,7,6...
*/

#include <stdio.h>

int main(void) {
    /*Initialising Variable*/
    int counter = 10;

    //Counter will continue to decrease by 1 from 10 until it hits 1
    while(counter != 1) {
        printf("%d,", counter);
        counter--;
    }printf("%d", counter); //Print the last variable without the "," 

    return 0;
}