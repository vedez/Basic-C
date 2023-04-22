/*
Description: 
    Create two arrays and multiply the correspodining elements and store the products into a 3rd array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 4
#define RAN_SIZE 50

int main(void) {
    /*Initialising Variables*/
    int arrA[ROW][COL], arrB[ROW][COL], arrC[ROW][COL];
    char dm[][15] = {"\nA: ", "\nB: ", "\nC: "};
    srand(time(NULL)); //Continiously changing the seed for rand() function

    //Populating array A and B with a random number generator between 0-10
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            arrA[i][j] = rand()%RAN_SIZE;
            arrB[i][j] = rand()%RAN_SIZE;
        }
    }

    //Calculating the products and displaying to user
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            arrC[i][j] = arrA[i][j]*arrB[i][j];

            printf("%s%d", dm[0], arrA[i][j]);
            printf("%s%d", dm[1], arrB[i][j]);
            printf("%s%d\n", dm[2], arrC[i][j]);
        }
    }

    return 0;
}