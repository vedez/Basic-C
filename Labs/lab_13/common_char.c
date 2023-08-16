/*
Description:
    4. 
    Returning a value from a function. Write a program that uses a function to calculate the most commonly used character from a number of 3 characters entered by a user. 
    Your main() should read the 3 characters and these should be passed to your function. 
    Your function should calculate the most common character of the 3 (assume the user enters more than one occurrence of any character). 
    This character should then be returned to the main(). 
    Your main() should then display this character with an appropriate message
*/

#include <stdio.h>
#include <stdlib.h>

/*GLOABL VARIABLES*/
#define SIZE 3
#define ROW 3
#define COL 2

/*FUNCTIONS*/
//Func: highest() | Will return which character is most common
/*int highest(int a, int b, int c) {
    int arr[] = {a, b, c};
    int high_pos;

    //Finding the coomon character
    for(int i = 0; i < SIZE; ++i) {
        if(arr[i-1] > arr[i]) high_pos = i;
        else high_pos = i;
    }

    return high_pos;
}*/

//Func: common() | Finding the common character
char  common(char *arr) {
    /*Initialising Variables*/
    int* ptr_base = malloc((ROW*COL) * sizeof(int)); //DMA: 2D Array

    //Malloc() | Used to make n size array
    if (ptr_base == NULL) {
        printf("\n[Memory Allocation fail.]");
        exit(0);
    }
    else {
        printf("\n[Memory Allocation success.]");
        ptr_base[0]= '5';
        
    

    }

    return 'a';
}
/*END OF FUNCTIONS*/

/*MAIN*/
int main(void) {
    /*Initialising Variables*/
    char qm[] = "\nPlease enter 3 characters:\n";
    char dm[] = "\nThe most common character is ";
    char user[SIZE], comm;

    //Asking user for input
    printf("%s", qm);
    for(int i = 0; i < SIZE; i ++) {
        scanf("%c", &user[i]);
        while(getchar() != '\n');
    }

    //Finding the common character using common() func
    comm = common(user);
    printf("%s%c", dm, comm);

}
/*END OF MAIN*/



