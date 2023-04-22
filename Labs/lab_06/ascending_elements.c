/*
Description:
    Write a program to enter numbers into an integer array with 3 elements, i.e., the size 
    of the array is 3. Your program must sort the array in ascending order (i.e., the first 
    element is the smallest and each element after the first is greater than or equal to the 
    element before it).

    Resource: https://www.geeksforgeeks.org/sorting-algorithms/
*/

#include <stdio.h>
#include <math.h>
#define SIZE 5 //Doing 5 to test if algo. works.

//Function: Swaping the elements 
int * swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int main(void) {
    /*Initailising Variables*/
    char qm[] = "\nPlease enter 5 numbers:\n";
    char dm[] = "\nThis is the array in ascending order: ";
    int num[SIZE];

    //Taking input from user
    printf("%s", qm);
    for(int i = 0; i < SIZE; i++) scanf("%d", &num[i]);

    //Arranging elements in asc. order 
    for(int i = 0; i < SIZE; i ++) {
        for(int j = 0; j < SIZE; j++) {
            if(num[i] < num[j]) {
                swap(&num[i], &num[j]);
            }
        }
    }
    //NOTE: **This is a big O of n^2: There are better sorting alogorithms. Will be updating.**

    //Printing array
    printf("%s", dm);
    for(int i = 0; i < SIZE; i++) printf("%d", num[i]);

    return 0;
}