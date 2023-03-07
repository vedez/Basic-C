/*
Description: Write a program in which takes two int inputs from a user and 
             check if the first number is evenly divisible by the second number.
*/

#include <stdio.h>

int main(void) {
    /*Initialising Variables*/
    int num[2];
    char qm[] = "\nPlease enter two numbers: \n";
    
    //Taking input from user;
    printf("%s", qm);
    for(int i = 0; i < 2; i++) {
        scanf("%d", &num[i]);
    }

    //Check if there is no remainder left (evenly divisible) after a/b and if there is, a/b can not be evenly divisible.
    if(num[0]%num[1] == 0) {
        printf("%d is evenly divisible by %d", num[0], num[1]);
    } else {
        printf("%d is not evenly divisible by %d", num[0], num[1]);
    }

    return 0;
}