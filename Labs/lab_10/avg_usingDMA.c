/*
Description:
    (i) Write a program that uses DMA to allocate memory for 5 floating-point numbers.
        You can use either malloc() or calloc().
    (ii) After memory has been allocated for the 5 float numbers, enter these numbers into
        the memory block.
    (iii) Calculate and display the average of these numbers.
*/

#include <stdio.h>
#include <stdlib.h>

/*GLOBAL VARIABLES*/
#define SIZE 5

/*MAIN*/
int main(void){
    /*Initialising Variables*/
    float total;
    char qm[] = "\n\nPlease enter 5 decimal numbers: ";
    float * ptr_base; //Base address

    //Making the memory block
    ptr_base = (float *)calloc(SIZE, sizeof(float*)); //NOTE: pointer = (data_type *)calloc(size_element, sizeof(data_type))

    //Checking if the block is created and populate it with elements
    if (ptr_base == NULL) {
        printf("\n[Memory Allocation fail.]");
        exit(0);
    }
    else {
        printf("\n[Memory Allocation success.]");

        //Taking input from user
        printf("%s\n", qm);
        for(int i = 0; i < SIZE; ++i) scanf("%f", &*(ptr_base + i));

        /*
        //printing input test
        printf("\nArray:\n");
        for(int i = 0; i < SIZE; ++i) printf("%.2f ", *(ptr_base + i));
        */

       //Finding the average of the array
       for(int i = 0; i < SIZE; ++i) total += *(ptr_base + i);
       printf("\nThe average of the array is %.2f", total/SIZE);

    }

    return 0;
}