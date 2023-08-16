/*
Description:
    2.
    Returning a value from a function. Write a program that uses a function to calculate the average of 3 numbers. 
    Your main() should ask the user to enter these 3 numbers and they should be passed to the function as parameters. 
    Your function should calculate the average and return this value back to the main(). 
    Your main() should then display this average value.

    3. 
    Returning a value from a function. Write a program that uses a function to check for the highest value of 3 numbers. 
    You should enter the 3 numbers using main() and these should be passed to your function. 
    Your function should find the highest of these numbers and return it back to main(). 
    Your main() should then display this highest number
*/

#include <stdio.h>

/*GLOBAL VARIABLES*/
#define SIZE 3

/*FUNCTIONS*/
//Func: average()
int average(int a, int b, int c) {
    int total = a + b + c;

    return total/SIZE; //Returning Average
}

//Func: highest()
int highest(int a, int b, int c) {
    int arr[] = {a, b, c};
    int highest;

    //Finding the highest number
    for(int i = 0; i < SIZE; ++i) {
        if(arr[i-1] > arr[i]) highest = arr[i-1];
        else highest = arr[i];
    }

    return highest;
}
/*END OF FUNCTIONS*/

/*MAIN*/
int main(void){
    /*Initialising Variables*/
    int x, y, z, high, avg;

    //Taking input
    printf("\nPlease enter %d numbers:\n", SIZE);
    scanf("%d%d%d", &x, &y, &z);

    //Finding the average
    avg = average(x, y, z);

    //Finding the highest number
    high = highest(x, y, z);

    //Displaying Results
    printf("\nThe average is %d", avg);
    printf("\nThe highest number is %d", high);

}
/*END OF MAIN*/
