/*
Description: 
    Write a program that uses a 3x2 array. Your program must do the following: 
        a) Enter in values for each element in the array. 
        b) Calculate and display the sum of row 0, row 1, and row 2 separately. 
        c) Calculate and display the sum of column 0 and column 1 separately. 
        d) Find the highest number in the array and display it. 
    
    NOTE: You might try to design the solution for this program on paper first. Do not 
    hack code to solve this question.
*/

#include <stdio.h>

/*GLOBAL*/
#define ROW 3
#define COL 2

/*MAIN*/
int main(void){
    /*Initialising Variables*/
    char qm[] = "\nPlease enter 6 numbers: \n";
    char dm[][20] = {" Row Total: ", " Column Total: ", "\n\nHighest Number: "};
    int arr[ROW][COL], row_total[ROW] = {0,0,0}, col_total[COL] = {0,0};
    int high = 0;

    printf("%s", qm);
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            //Taking input from user
            scanf("%d", &arr[i][j]);

            //Calculating the total of each column
            if (j == 1) col_total[j] += arr[i][j]; 
            else col_total[j] += arr[i][j];

            //Calculating the total of each row
            row_total[i] += arr[i][j];

            //Finding the highest number
            if(high < arr[i][j]) high = arr[i][j];
        }
    }
    
    //Printing the totals of each row, column and the hightest number within the array
    for(int i = 0; i < ROW; i++) printf("\n[%d]%s%d", (i+1), dm[0], row_total[i]);
    printf("\n"); 
    for(int i = 0; i < COL; i++) printf("\n[%d]%s%d", (i+1), dm[1],  col_total[i]);
    printf("%s%d\n\n", dm[2], high);



}