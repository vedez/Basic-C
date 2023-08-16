/*
Description:
    Returning a value from a function. Write a program that uses a function to check if a 
    number is even or odd. Your main() should allow the user to enter any number and 
    this should be passed to your function. Your function should check if the number is 
    even or odd and return a 1 if even or a 0 if odd. Your main() should then indicate the 
    result.
*/

#include <stdio.h>
#include <stdlib.h>

/*FUNCTIONS*/
//Func: odd_even()
int odd_even(int a) {
    if(a%2 == 0) return 1; //Check if no remainders (Even)
    return 0;
}
/*END OF FUNCTIONS*/

/*MAIN*/
int main(void){
    /*Initialising Variables*/
    int num, result;

    //Taking input from user
    printf("\nPlease enter a number: ");
    scanf("%d", &num);

    result = odd_even(num);

    //Displaying if number is odd or even
    if(result == 1) {
        printf("\nThis number is even.");
        exit(0);
    }
    printf("\nThis number is odd.");

    return 0;
}
/*END OF MAIN*/