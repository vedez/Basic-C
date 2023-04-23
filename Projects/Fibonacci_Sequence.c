/*
Description:
    This program will implement the Fibonacci sequence formula. It will allow user to input a number and will display 'n' positions of the
    Fibonacci sequence. This will loop until user chooses to end the program.

    Error checkings should be implemented. ex. Input is greater than the 2 options available.

    **NOTE: Fibonacci Sequence Formula**
        "The sum of the current number and the previous number produces the next number".

    Author: L Fernandez | 23/04/23
*/

#include <stdio.h>
#include <stdlib.h>

/*FUNCTIONS*/
//Func: fib_func() | Print the n terms of the Fibonacci sequence 
int fib_func(int n) {
    //Creating a memory block | Using calloc() to populate array in 0s
    int * fib_ptr = (int *)calloc(n, sizeof(int *));

    //Check if memory block is created
    if(fib_ptr == NULL) {
        printf("\n[An error has arise, please try again.]\n[Memory allocation fail.]");
        exit(0);
    }
    else {
        printf("\n[Printing %d terms of the Fibonacci Sequence...]\n", n);

        //Printing the sequence to the 'n' term
        for(int i = 0; i < n; ++i) {
            if(fib_ptr[i] == 0) fib_ptr[i + 1] = 1;
            else {
                fib_ptr[i+1] = fib_ptr[i] + fib_ptr[i-1];
            }

            printf("%d ", fib_ptr[i]);
        }
    }
}
/*END OF FUNCTIONS*/

/*MAIN*/
int main(void){
    /*Initialising Variables*/
    int option = 0, position; //Default value

    //Keeping the program running
    do{
        //MAIN MENU
        printf("\n\n[Main Menu]");
        printf("\n[1] Enter the number of terms to display in the sequence\n[2] Exit Program\n\n");

        //Taking input from user
        scanf("%d", &option);
        while (getchar() != '\n');
        

        switch(option){
            case 1:
                //Taking the position the user wants to print the sequence to
                printf("\nEnter number:\n");
                scanf("%d", &position);
                while (getchar() != '\n');

                //Calling the fib_func() function
                fib_func(position);
                break;

            case 2:
                printf("\n[Closing Program]");
                exit(0); //Exit Program

            default:
                printf("\n[Incorrect input. Please try again]");

        }

    }while(option != 2);

    return 0;    
}
/*END OF MAIN*/
