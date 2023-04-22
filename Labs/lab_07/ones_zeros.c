/*
Description:
    Use 2 for loops to set all diagonal elements of a 9by9 int array to 1 anf the rest 0.
*/
#include <stdio.h>
#define ROW 9
#define COL 9

int main(void) {
    /*Initialising Variables*/
    int arr[ROW][COL];

    //Populating array with 1.s diagonally and 0.s for others.
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            if(i == j) arr[i][j] = 1;
            else arr[i][j] = 0;
        }
    }

    //Displaying the 2D array
    for(int i = 0; i < ROW; i++) {
        printf("\n");
        for(int j = 0; j < COL; j++) printf("%d  ", arr[i][j]);
    }    

    return 0;
}