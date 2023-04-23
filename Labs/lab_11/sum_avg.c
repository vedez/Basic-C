/*
Description:
        Write a program that uses 2 functions called sum() and average(). 
        Your program must ask the user to enter 3 numbers inside the main(). 
        Your main() should then pass these 3 values as parameters to the function sum(). 
        This function should calculate the sum of the 3 numbers. 
        Your function sum() should then pass the sum of the 3 numbers as a parameter to the function average(). 
        The function average() should then calculate the average of the 3 numbers and display this on the screen
*/

#include <stdio.h>

/*FUCNTIONS*/
//Func: avg()
int avg(int tot) {
    printf("\nThe average of the 3 numbers is %d", tot);
}

//Func: sum()
int sum(int a, int b, int c){
    int total = a + b + c;

    avg(total/3);
}  
/*END OF FUNCTIONS*/

/*MAIN*/
int main(void){
    /*intialising Variables*/
    int x, y, z;

    //Taking input from user
    printf("\nPlease enter 3 numbers:\n");
    scanf("%d%d%d", &x, &y, &z);

    //Calling sum() function
    sum(x, y, z);

    return 0;    
}