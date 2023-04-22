/*
Description:
    This program will take 10 inputs between 2 arrays and will display the product of the corresponding elements.
*/

#include <stdio.h>
#define SIZE 5

int main(void){
    /*Initialising Variables*/
    char qm[][35] = {"\nEnter 5 variables for Array A: \n", "\nEnter 5 variables for Array B: \n"};
    char dm[][15] = {"\nArray A: ", "\nArray B: ", "\nResult: "};
    int arrA[SIZE], arrB[SIZE], result;

    //Taking input
    printf("%s", qm[0]);
    for(int i = 0; i < SIZE; i++) scanf("%d", &arrA[i]);
    printf("%s", qm[1]);
    for(int i = 0; i < SIZE; i++) scanf("%d", &arrB[i]);

    //Displaying the results
    for(int i = 0; i < SIZE; i++) {
        printf("%s%d%s%d", dm[0], arrA[i], dm[1], arrB[i]);
        result = arrA[i]*arrB[i];
        printf("%s%d\n", dm[2], result);
    }

    return 0;
}