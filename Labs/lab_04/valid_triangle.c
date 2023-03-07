/*
Description: 
    Write a program that takes 3 number inputs and determine if this forms a triangle.
    Note: In a triangle, the sum of two sides is always greater than the third side.
*/

#include <stdio.h>

int main(void) {
    /*Initialising Variables*/
    int num_arr[3], x, y, z;
    char qm[] = "Please enter 3 values.\n";
    char valid[] = "This forms a valid triangle";
    char invalid[] = "This does not form a valid triangle";

    //Taking input from user
    printf("\n%s", qm);
    for(int i = 0; i < 3; i++) {
        printf("Side %d: ", (i + 1)); //Determine side numbers
        scanf("%d", &num_arr[i]);
    }

    // SIMPLIFY: X:a+b > c | Y:a+c > b | Z:bc > a
    x = num_arr[0] + num_arr[1]; // >c
    y = num_arr[0] + num_arr[2]; // >b
    z = num_arr[1] + num_arr[2]; // >a

    //Check different ways of sides are added and compare to the third side
    //Display if the triangle is valid or not
    switch ((x > num_arr[2] && y > num_arr[1] && z > num_arr[0]) == 0){
        case 0:
            printf("\n%s", valid);
            break;
        
        default:
            printf("\n%s", invalid);
            break;
    }

    return 0;
}

