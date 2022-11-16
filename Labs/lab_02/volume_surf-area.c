/*
Description:
    Find the volume and surface area of a box with 10cm Height, 11.5cm Length and 2.5cm Width
*/

#include <stdio.h>

int main()
{
    float height = 10.0;
    float length = 11.5;
    float width = 2.5;

    float volume = height * length * width;
    float surf_area = 2*(height*length + height*width + length*width);

    printf("The volume of this box is %.2f", volume);
    printf("\nThe surface area of this box is %.2f", surf_area);
}