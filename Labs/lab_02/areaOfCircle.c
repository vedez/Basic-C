/*
Description:
    Find the area of a circle
    Formula: πr^2 where π = 3.14
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float pi_ = 3.14;
    float radius = 4.8;
    float area = pi_*pow(radius, 2);

    printf("The area of this circle is %.2f", area);
}