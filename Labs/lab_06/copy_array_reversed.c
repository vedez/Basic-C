/*
Description:
    Write a program that defines an integer array with 5 elements. Your program must do the following: 
    • Enter the 5 integer values into the array 
    • Define another integer array with 5 elements and copy the values from the 1st 
      array into the second array in reverse order (e.g., the number in the first 
      element of the 1st array will be in the last element in the 2nd array, etc..).
*/

#include <stdio.h>
#define SIZE 5

/*MAIN*/
int main(void){
    /*Initailising Variables*/
    char qm[] = "\nPlease enter 5 integer numbers:\n";
    char dm[][11] = {"\nArray A: ", "\nArray B: "};
    int arrA[SIZE], arrB[SIZE];

    //Taking input from user into array A
    printf("%s", qm);
    for(int i = 0; i < SIZE; i++) scanf("%d", &arrA[i]);

    //Copying contents from array A to array B in reverse
    for(int i = 0; i < SIZE; i++) arrB[i] = arrA[SIZE - (i+1)];

    //Printing array B with the reversed contents
    printf("%s", dm[0]);
    for(int i = 0; i < SIZE; i++) printf("%d", arrA[i]);
    printf("%s", dm[1]);
    for(int i = 0; i < SIZE; i++) printf("%d", arrB[i]);

}