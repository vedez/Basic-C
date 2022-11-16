/*
Description: Assigning Variables
    Lab 01 Part 1:
    Code the given example in class. 
*/

#include <stdio.h>

int main()
{
    //Local Variables
    int var1;
    float var2;
    char var3;

    //Assigning values into the variables
    var1 = 10;
    var2 = 8.21;
    var3 = 'q';

    //Printing into display output
    printf("var1 contains %d\n", var1); // '\n' - Send the next information to a new line
    printf("var2 contains %.2f\n", var2); //.xf where x determines the number of decimal places to be printed. Ex. '.4f' will print 4 numbers after the decimal.
    printf("var3 containes %c", var3);

    return 0;
}