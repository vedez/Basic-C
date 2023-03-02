/*
Description:
    Calculate the average of 1.0 - 2.0
*/

#include <stdio.h>

int main()
{
    float sum = 1;
    float total = 1;
    int counter = 0;

    /*Iterating between 1.0 to 2.0 by adding 0.1 each loop and adding all the numbers together. Keeping count of the iteration to divide the total to find the acerage.*/
    for(int i = 0; i < 10; i++) 
    {
        sum += 0.1;
        total += sum;
        counter++;
    }

    printf("The average of 1.0 ... 2.0 is %.2f", total/counter);
}