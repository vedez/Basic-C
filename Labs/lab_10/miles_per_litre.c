/*
Description: 
    With the given arrays, calculate the miles per litre respectively. Use pointers only.

    float litres[] = {11.5, 11.21, 12.7, 12.6, 12.4};
    float miles[] = {471.5, 358.72, 495.3, 453.6, 421.6};
    int mpl[5];

    **Formula: m / l = mpl**
*/

#include <stdio.h>

#define SIZE 5

//Function: Calculates Miles per Litre
int mpl_func(float miles, float litres) {
    return miles/litres;
}

/*MAIN*/
int main(void) {
    /*Initialising Variables*/
    float litres[] = {11.5, 11.21, 12.7, 12.6, 12.4};
    float miles[] = {471.5, 358.72, 495.3, 453.6, 421.6};
    int mpl[SIZE];
    char dm[] = {"\nAnswers: "};

    //Using mpl_func()
    for(int i = 0; i < SIZE; i++) *(mpl + i) = mpl_func(*(miles + i), *(litres +i));

    //Displaying answers from mpl array
    printf("%s", dm);
    for(int i = 0; i < SIZE; i++) printf("%d ", *(mpl + i));

    return 0;

}