/*
Description:
    Writing a single scanf() statement for each of the following:
        a) int first;
        b) int second, third, fourth;
        c) float principle, rate, time;
        d) char keyval1, keyval2;
        e) char c;
           int i;
           float f;
           double d;
*/

#include <stdio.h>

int main(void) {
    /*Initialising Local Variables*/
    int first, second, third, fourth, i;
    float principle, rate, time, f;
    char keyval1, keyval2, c;
    double d;

    /*QMessage for Display*/
    char QMessage[] = "\n\nPlease enter";
    char display_message[] = "\nYou have entered:\n";

    //a) int first;
    printf("%s a number: ", QMessage);
    scanf("%d", &first);
    printf("%s%d", display_message, first);

    //b) int second, third, fourth;
    printf("%s 3 numbers: \n", QMessage);
    scanf("%d %d %d", &second, &third, &fourth);
    printf("%s%d\n%d\n%d", display_message, second, third, fourth);

    //c) float principle, rate, time;
    printf("%s the principle, rate and time: \n", QMessage);
    scanf("%f %f %f", &principle, &rate, &time);
    printf("%s%.2f\n%.2f\n%.2f", display_message, principle, rate, time);

    //d) char keyval1, keyval2;
    printf("%s 2 character keys: \n", QMessage);
    while (getchar() != '\n');
    scanf("%c %c", &keyval1, &keyval2); //while (getchar() != '\n');
    printf("%s%c\n%c\n", display_message, keyval1, keyval2);   
        
    //e) char c; int i; float f; double d;
    printf("%s 1 character and 3 numbers: \n", QMessage);
    while (getchar() != '\n');
    scanf("%c%d%f%ld", &c, &i, &f, &d); //while (getchar() != '\n');
    printf("%s%c\n%d\n%.2f\n%ld", display_message, c, i, f, d);   

    return 0;

}