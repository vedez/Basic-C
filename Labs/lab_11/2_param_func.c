/*
Description:
    This program will print a star (*) n times which n, is given by user.
*/

#include <stdio.h>

/*FUNCTIONS*/
//Func: print_star()
void print_star(int num, char type){
    for(int i = 0; i < num; i++) printf("%c", type);
}
/*END OF FUNCTIONS*/

/*MAIN*/
int main(void){
    /*Initialising Variables*/
    int amount;
    char symbol;

    //Asking User for a character
    printf("\nPlease enter a character:\n");
    scanf("%c", &symbol);
    while(getchar() != '\n');

    //Asking User how many times character should print
    printf("\nPlease enter the number of times the symbol will be printed.\n");
    scanf("%d", &amount);

    print_star(amount, symbol);
}
/*END OF MAIN*/