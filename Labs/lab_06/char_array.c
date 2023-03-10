/*
Description:
    Write a program that uses a char array with 5 elements. Enter any 5 characters of your 
    choice into the array. Output the contents of the array to the screen and display each 
    character. 
*/

#include <stdio.h>
#define SIZE 5

int main(void) {
    /*Initialising Variables*/
    char qm[] = "\nPlease enter 5 character keys:\n";
    char arr_char[SIZE];

    //Taking userinput into array character
    printf("%s", qm);
    for(int i = 0; i < SIZE; i++) {
        scanf("%[^]c", &arr_char[i]); //ref. 01: [^]s means it will take a character until user presses [ENTER]
        while (getchar() != '\n'); //Error "enter" bug fixer.
    }

    //Printing Array
    for(int i = 0; i < SIZE; i++) printf("%c, ", arr_char[i]);

}
//Resource: ref. 01 - https://www.emblogic.com/blog/09/how-to-read-space-by-scanf-in-c/