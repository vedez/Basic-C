/*
Description:
    This prigram will take a positive int value and will follow this given sequence:
        Sequence: "If the number is even, halve it. If the number is odd, multiply by 3 and add 1."
    Process will repeat until the value is one and display each value as well as the number of steps operated.
    If the number is less than 1, print error and re-enter another number.
*/

#include <stdio.h>

int main(void) {
    /*Initialising Variables*/
    int userinput, counter = 0;
    char qm[] = "\nPlease enter an integer number: ";
    char error_m[] = "\nInvalid value. Please re-enter a positive number.\n";
    char value_m[][20] = {"\nIntial value ", "\nNext value is ", "\nFinal value ", " | Number of steps "};

    //Taking a number from user and error checking if its a value less than 1
    printf("%s", qm);
    do {
        scanf("%d", &userinput);
        printf("%s", error_m);
    } while(userinput < 1);

    //Display intial value
    printf("%s%d", value_m[0], userinput);
    
    //Application of sequence
    while (userinput) {
        counter++; //Track the number of steps/operations made

        //Check if number is even or odd and apply appropriate sequnce
        switch(userinput%2) {
            case 0:
                userinput /= 2; //If even, half the number.
                break;
            default:
                userinput*= 3; //If odd, multiply by 3
                userinput++; //Add 1
                break;
        }

        //If the number is equal to 1, break the loop and print the final value as well as the number of operations
        if(userinput == 1) {
            printf("%s%d%s%d", value_m[2], userinput, value_m[3], counter);
            break;
        }

        //Display the next value
        printf("%s%d", value_m[1], userinput);
    }

    return 0;
}