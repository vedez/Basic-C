/*
Description:
    Create a 4by5 array and have the user populate this array. Display the values less than 0
    and dislpay the value as well as their location indices.
*/

#include <stdio.h>
#define ROW 4
#define COL 5

int main(void){
    /*Initialising Variables*/
    char qm[] = "\nPlease enter 20 numbers: \n";
    int arr[ROW][COL];

    //Taking input from user into array
    printf("%s", qm);
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) scanf("%d", &arr[i][j]);
    }

    //Checking which elements are less than 0
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            if(arr[i][j] < 0) printf("\nVariable %d located at ROW %d COL %d is less than 0", arr[i][j], (i+1), (j+1)); //As per paper | As per code (no +1) 
        }
    }
    
}