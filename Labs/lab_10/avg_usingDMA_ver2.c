/*
Description:
    Allocate a second memory block and store the average value
    calculate in part (iii) in this block. Display all of the 5 float values in the first memory
    block and their average value in the second memory block on the screen.

    (Hint: you will need to use 2 float pointers, one pointer to the block of memory
    storing the 5 floating-point numbers, the other pointer to the block of memory storing
    the average of the 5 numbers).
*/

#include <stdio.h>
#include <stdlib.h>

/*GLOBAL VARIABLES*/
#define SIZE 5
#define SIZE_avg 1

/*MAIN*/
int main(void){
    /*Initialising Variables*/
    float total;
    char qm[] = "\n\nPlease enter 5 decimal numbers: ";
    float * ptr_base; //Base address
    float * ptr_avg; //*NEW LINE*

    //Making the memory block
    ptr_base = (float *)calloc(SIZE, sizeof(float*)); //NOTE: pointer = (data_type *)calloc(size_element, sizeof(data_type))
    ptr_avg = (float *)calloc(SIZE_avg, sizeof(float *)); //*NEW LINE*

    //Checking if the block is created and populate it with elements
    if (ptr_base == NULL) {
        printf("\n[Array Memory Allocation fail.]");
        exit(0);
    }
    else {
        printf("\n[Array Memory Allocation success.]");

        //Taking input from user
        printf("%s\n", qm);
        for(int i = 0; i < SIZE; ++i) scanf("%f", &*(ptr_base + i));

        /*
        //printing input test
        printf("\nArray:\n");
        for(int i = 0; i < SIZE; ++i) printf("%.2f ", *(ptr_base + i));
        */

       //Finding the total of the array
       for(int i = 0; i < SIZE; ++i) total += *(ptr_base + i);//*NEW LINE*
    }

    //Memory block for average
    if (ptr_avg == NULL) {
        printf("\n[Average Block Memory Allocation fail.]");
        exit(0);
    }
    else {
        printf("\n[Average Block Memory Allocation success.]");

       //Finding the average of the array
       *(ptr_avg + 1) = total/SIZE;//*NEW LINE*
       printf("\nThe average of the array is %.2f", *(ptr_avg + 1));//*NEW LINE*
    }

    return 0;
}