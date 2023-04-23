/*
Description: This program will use a function that will print 10 stars on a single line.
*/

#include <stdio.h>

/*Global Variables*/
#define STARS 10

/*FUNCTIONS*/
//Func: func_star()
void func_star() {
    for(int i = 0; i < STARS; i++) printf("*");
}
/*END OF FUNCTIONS*/

/*MAIN*/
int main(void){
    //Calling function from main
    func_star();

    return 0;
}
/*END OF MAIN*/
