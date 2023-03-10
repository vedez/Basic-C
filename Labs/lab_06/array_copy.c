/*
Description:
    This program will copy the contents (5 ints) of one array (A) to another array (B)
*/

#include <stdio.h>
#define SIZE 5

int main(void) {
    /*Initilaising Variables*/
    int arrA[SIZE], arrB[SIZE];
    char qm[] = "\nEnter 5 integer numbers:\n";
    char dm[] = "\nArray B contains: "; //Test

    //Taking input from user
    printf("%s", qm);
    for(int i = 0; i < SIZE; i++) scanf("%d", &arrA[i]);

    //Copying contents from initial array to arrB
    for(int i = 0; i < SIZE; i++) arrB[i] = arrA[i];

    //Printing the values of arrB
    printf("%s", dm);
    for(int i = 0; i < SIZE; i++) printf("%d ", arrB[i]);
    


}