/*
Description:
    This program will take two integer inputs from the user and will add both numbers using pointers only.
*/

#include <stdio.h>

/*Global variables*/
#define SIZE 2

/*MAIN*/
int main(void){
    /*Initialising Variables*/
    int arr[SIZE], sum;
    int *ptr1 = &arr[0], *ptr2 = &arr[1], *ptr3 = &sum;
    char qm[] = "\nPlease enter two numbers: \n";
    char dm[] = "\nThe sum of both numbers is ";

    //Taking input from
    printf("%s", qm);
    for(int i = 0; i < SIZE; i ++) scanf("%d", &arr[i]);

    //Calculating the sum of the contents of both pointers and printing the total
    *ptr3 = *ptr1 + *ptr2;
    printf("%s%d", dm, *ptr3);

    return 0;
}