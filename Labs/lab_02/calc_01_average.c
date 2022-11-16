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

    for(int i = 0; i < 10; i++) 
    {
        sum += 0.1;
        total += sum;
        counter++;
    }

    printf("The average of 1.0 - 2.0 is %.2f", total/counter);
}