/*
Description:
    Define an integer array with 4 elements. Write a program that will allow the user to 
    enter 4 numbers into this array and do the following:
        • Display the contents of the array to the screen in the same order they were 
          entered.
        • Swap the 1st and 2nd numbers in the array and swap the 3rd and 4th numbers 
          in the array. Now display the numbers on the screen using this new order.
*/

#include <stdio.h>
#define SIZE 4

/*Function: Swapping the values*/
int * swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

/*MAIN*/
int main(void) {
    /*Initailising Variables*/
    char qm[] = "\nEnter 4 numbers: \n";
    char dm[] = "\nThese are the contents of the array: ";
    char dm2[] = "\nThese are the contents of the array after re-arranging: ";
    int arr[SIZE];

    //Taking input
    printf("%s", qm);
    for(int i = 0; i < SIZE; i++) scanf("%d", &arr[i]);

    //Checking the contents of the original array
    printf("%s", dm);
    for(int i = 0; i < SIZE; i++) printf("%d", arr[i]);

    //Altering the array using Swap function
    swap(&arr[0], &arr[1]); //First and Second Element
    swap(&arr[2], &arr[3]); //Third and Fourth Element

    //Checking the contents of the altered array
    printf("%s", dm2);
    for(int i = 0; i < SIZE; i++) printf("%d", arr[i]);

}