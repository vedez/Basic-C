/*
Description: Write a switch statement which asks the user to enter an integer number between 1 to 100 and return whether it is odd or even. 
*/

#include <stdio.h>

int main(void) {
    /*Initialising variables*/
    int num_input, result;
    char qm[] = "Please enter a number between 1 to 100.";
    char odd_message[] = "The number you have entered is an odd number.";
    char even_message[] = "The number you have entered is an even number.";
    char error[] = "Invalid, please try again.";


    //Taking user input
    printf("%s\n", qm);
    scanf("%d", &num_input);

    /*//TEST
    result = num_input%2;
    printf("%d>>>>>\n\n", result);*/

    //Calculating if num mod 2 is equal to 0 (Even) or 1 (Odd) and print the appropriate statement.
    switch(num_input%2) {
        case 0:
            printf("%s", even_message);
            break;
        case 1: 
            printf("%s", odd_message);
            break;
        default:
            printf("%s", error); //IF neither of the cases is true, error message.
    }

    return 0;

}