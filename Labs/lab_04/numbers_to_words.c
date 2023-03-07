/*
Description:
    This program will take a single number between 0-9 and will display the spelling version.
    Ex. 5 -> Five
    
*/

#include <stdio.h>

int main(void) {
    /*Initialising Variables*/
    char qm[] = "\nPlease enter a single-digit number: ";
    char num[][6] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int userinput;

    //Taking input from user
    printf("%s", qm);
    scanf("%d", &userinput);

    /*Version 2: Wanted to improve Ver. 1.*/
    printf("Word: %s", num[userinput]);

    /*Version 1*/
    /*switch (userinput)
    {
        case 0:
            printf("%s", num[0]);
            break;

        case 1:
            printf("%s", num[1]);
            break;

        case 2:
            printf("%s", num[2]);
            break;

        case 3:
            printf("%s", num[3]);
            break;

        case 4:
            printf("%s", num[4]);
            break;

        case 5:
            printf("%s", num[5]);
            break;

        case 6:
            printf("%s", num[6]);
            break;

        case 7:
            printf("%s", num[7]);
            break;

        case 8:
            printf("%s", num[8]);
            break;

        case 9:
            printf("%s", num[9]);
            break;

        default:
            printf("Please enter a single-digit number. Try again.");
            break;
    }*/

    return 0;
}