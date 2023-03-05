/*
    Description: This program will take a temperature input in Fahrenheit and will convert it into Celsius.
*/

#include <stdio.h>

//Function to convert fahrenheit display to celsisus display (Formula)
float converter_ftoc(float far) {
    float cel = (far - 32.0) * (5.0/9.0);
    return cel;
}

int main(void) {
    /*Initialising Variables*/
    float fahrenheit, celsius;
    char qm[] = "Please enter the temperature (Fahrenheit): ";
    char dm[] = "The temperature in Celsius is: ";

    printf("%s", qm);

    //Taking input from user and calling the function
    scanf("%f", &fahrenheit);
    celsius = converter_ftoc(fahrenheit);

    printf("%s%.2f", dm, celsius);

    return 0;
}

