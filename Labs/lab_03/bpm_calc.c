/*
Description: Write a program that will calculate the number of beats the user's heart has made their entire life.
             Assuming the human rate is 75 BPM. Formula: (Age*525600)*BPM = ANS */

#include <stdio.h>
#define AVG_BPM 75

int main(void) {
    /*Initialising variables*/
    int age, result;
    char qm[] = "\nPlease enter your age: ";
    char dm[] = "\nYour heart has beated for ";

    printf("%s", qm);
    scanf("%d", &age); //Taking age input

    //Calculating the number of times the user's heart has beated
    result = (age*525600) * AVG_BPM;

    printf("%s%d times.", dm, result);

    return 0;

}