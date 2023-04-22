/*
Description: Introducing pointers and how they are initialised.
*/

#include <stdio.h>

/*MAIN*/
int main(void){
    /*Initialising Variables/Pointers*/
    int num1;
    char char1;
    int *ptr1 = &num1;
    char *ptr2 = &char1;

    char qm[] = "\nPlease enter a number and a character:\n";
    char dm[][30] = {"\nContents of ", "\nMemory address of "};

    //Taking input from user
    printf("%s", qm);
    scanf("%d", &num1);
    while (getchar() != '\n'); //Error "enter" bug fixer.
    scanf("%c", &char1);
    while (getchar() != '\n'); //Error "enter" bug fixer.

    //Printing the contents and address of num1, char1
    printf("%snum1: %d%snum1: %p", dm[0], num1, dm[1], &num1);
    printf("%schar1: %c%schar1: %p", dm[0], char1, dm[1], &char1);

    //Printing contents of ptr 1, ptr2 | Note: Should be the same as num1, char1
    printf("\n%sptr1: %p %snum1", dm[0], ptr1, dm[1]);
    printf("%sptr2: %p %schar1", dm[0], ptr2, dm[1]);

    //Printing the contents of the addresses stored in ptr1, ptr2
    //NOTE: dereference operator aka indirection operator
    printf("\n%sthe address in ptr1: %d", dm[0], *ptr1);
    printf("%sthe address in ptr2: %c", dm[0], *ptr2);

    return 0;

}