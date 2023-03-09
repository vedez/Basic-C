/*
Description:
    Print the multiples of x between 1-20 where x is a userinput (1-5).
*/

#include <stdio.h>

//Function: To find multiples of the number between 1-20 using modulus
int multiple(int input) {
    for(int i = 1; i <= 20; i++) {
        if(i%input == 0) printf("\n%d", i);
    }
}

/*MAIN*/
int main(void) {
    /*Initilaising Variables*/
    char qm[] = "\nEnter a number between 1-5: ";
    char err[] = "\nPlease try again. ";
    char dm[] = "\nThese are the multiples of ";
    int userinput;

    //Taking input from user between 1-5 and error checking in place
    printf("%s\n", qm);
    do {
        scanf("%d", &userinput);
        while (getchar() != '\n'); //Error "enter" bug fixer. In scenario, userinput == char.
        printf("%s%s", err, qm);
    } while (userinput < 1 || userinput > 5);

    //Switch statement with the different cases of numbers chosen (1-5)
    //Use multiple function and print the follwing multiples of the number
    switch (userinput){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("%s%d:", dm, userinput);
            multiple(userinput);            
            break;
        default:
            printf("System Error. Restart Program.");
            break;
    }
}