/* 
Description: Correct the code below
    #include <stdio.h>;
    main[]
        {
            /*Program to illustrate errors in a C program.
            int num1, num2;
            float num3;

            num1 = 400;
            600 = num2;

            PRINTF("The value of num1 is %d" num1);
            PRINT(" num2 is %d");
        ]
*/

#include <stdio.h>

int main()
{
    /*Program to illustrate errors in a C program.*/
    int num1, num2;
    float num3;

    num1 = 400;
    num2 = 600;
    
    printf("The value of num1 is %d\n", num1);
    printf("num2 is %d", num2);

    return 0;
}