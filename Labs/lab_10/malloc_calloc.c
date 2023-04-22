/*
Description:
    Using malloc() or calloc(), let user define the size of array and take x number of inputs from user. 
    Print the array as well as the sum of the elements within the array.

    **Pointers only**
*/

#include <stdio.h>
#include <stdlib.h>

/*MAIN*/
int main(void) {
    /*Initialising Variables*/
    int SIZE, SUM;
    char qm[] = "\nPlease enter the number of elements to be input: ";
    int * ptr_start; //This pointer will is the base address of the memory block
    

    //Taking size from user
    printf("%s", qm);
    scanf("%d", &SIZE);

    //Intialising Pointer which directs to the allotted memory 
    //Using calloc() to populate array into 0's when allotted. 
    ptr_start = (int *)calloc(SIZE, sizeof(int)); //NOTE: pointer = (data_type *)calloc(size_element, sizeof(data_type))

    //Checking memory block has been allocated successfully 
    if (ptr_start == NULL){
        printf("\nMemory allocation fail."); //If the pointer has no address allocated (empty)
        exit(0);
    }
    else {
        printf("\nMemory allocation successful."); //Pointer has an address (base for memory block)

        //Taking input from user
        printf("\nPlease enter %d numbers:\n", SIZE);
        for(int i = 0; i < SIZE; ++i) scanf("%d", &ptr_start[i]);

        //Printing the elements of the memory block
        printf("\nYou entered: ");
        for(int i = 0; i < SIZE; ++i) printf("%d ", ptr_start[i]);


    }

    return 0;

}



/*
NOTES: 
    The other difference between malloc() and calloc() in C is there is no initialization in Malloc() while initialization is done to '0' in calloc().
    ref. https://www.scaler.com/topics/difference-between-malloc-and-calloc-in-c/
    ref. https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/
*/