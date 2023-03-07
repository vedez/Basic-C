/*
Description: Using a switch statement, identify whether the user input is a vowel or a consonant.
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    /*Initialising Variables*/
    char qm[] = "Please enter a letter between a - z.";
    char vow_m[] = "This letter is a vowel.";
    char con_m[] = "This letter is not a vowel.";
    char userinput;

    //Taking input from user
    printf("%s\n", qm);
    scanf("%c", &userinput);
    while (getchar() != '\n'); //Error "enter" bug fixer.

    userinput = tolower(userinput); //Converting all inputs into lower case

    //Checking if vowel or consonant using a switch statement
    switch (userinput) {
        case 'a':
        case 'e': 
        case 'i': 
        case 'o': 
        case 'u': 
            printf("%s\n", vow_m);
            break;
        
        default: //IF not a vowel
            printf("%s\n", con_m);
            break;
    }

    return 0;
}