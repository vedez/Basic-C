/*
Description:
    Testing the modulus operator to find the remainder
*/

#include <stdio.h>

int main()
{
    int arr[6] = {2%2, 3%2, 5%2, 7%3, 100%33, 100%7};

    
    for (int i = 0; i < 6; i++)
    {
        printf("Answer: %d\n", arr[i]);
    }

    return 0;
}