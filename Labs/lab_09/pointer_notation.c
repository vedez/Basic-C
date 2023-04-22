/*
Description:
    Using pointer notation only, write a program that uses 2 floating-point arrays with 3 
    elements in each. Enter values into the 1st array. Copy the contents of this array into 
    the 2nd array. Display the contents of both arrays. 

    //NOTE: array_name[i]    ≈    *(array_name + i) 
*/

#include <stdio.h>

/*GLOBAL VARIABLES*/
#define SIZE 3

/*MAIN*/
int main(void){
    /*Initialising Variables*/
    float arrA[SIZE], arrB[SIZE];
    char qm[]= "\nPlease enter 3 float numbers for array A: \n";

    //Taking input into array A
    printf("%s", qm);
    for(int i = 0; i < SIZE; i++) scanf("%f", &*(arrA + i));

    //Copying the contents of array A into array B
    for(int i = 0; i < SIZE; i++) *(arrB + i) = *(arrA + i);

    //Printint the contents of array B    
    for(int i = 0; i < SIZE; i++) printf("\n%.2f", *(arrB + i));

    return 0;
}