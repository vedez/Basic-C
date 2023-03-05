/*
Description:
    Take 4 number inputs and print in reverse.
*/

#include <stdio.h>
#define SIZE 4

int main(void) {
    /*Initialising array and message display*/
    int arr_num[SIZE];
    char QMessage[] = "\n\nPlease enter 4 numbers: ";
    char display_message[] = "\nThese are the numbers you entered in reverse: ";

    printf("\n%s\n", QMessage);

    //Taking input from user
    for(int i = 0; i < 4; i++) {
        scanf("%d", &arr_num[i]);
    }

    // Printing array in reverse
    for (int i = SIZE - 1; i >= 0; i--) {
        printf("\n%d", arr_num[i]);
    } 

}