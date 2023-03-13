/*
Description:
    Write a program that uses a 3x2 (2-D) array. Your program must do the following:
        a) Enter values into the array
        b) Display the values in the array
        c) Find the smallest & largest value and display both to standard output
        d) Calculate the average of the values and display to standard output
*/

#include <stdio.h>
#define ROW 3
#define COL 2

int main(void) {
    /*Initialising Variables*/
    char qm[] = "\nPlease enter 6 numbers: \n";
    char dm[] = "\nThese are the numbers you have entered: ";
    int arr[ROW][COL];

    //Taking input from user into an array
    printf("%s", qm);
    for (int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++) scanf("%d", &arr[i][j]);
    }

    //Displaying the contents of the array
    printf("%s", dm);
    for (int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++) ("%d", arr[i][j]);
    }
}