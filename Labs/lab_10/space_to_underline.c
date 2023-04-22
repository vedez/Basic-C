/*
Description:
    In the provided array, using pointer notation only, replace all blank 
    elements to '_'.

    char chars[] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'};
*/

#include <stdio.h>

/*MAIN*/
int main(void) {
    /*Initialising Variables*/
    char chars[] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd', '\n'}; //Given array

    //Displaying Original Array
    printf("\nPrinting the Original Array\n");
    for(int i = 0; i < sizeof(chars)/sizeof(*(chars + 0)); i++) printf("%c", *(chars + i));

    //Printing Altered Array
    for(int i = 0; i < sizeof(chars)/sizeof(*(chars + 0)); i++){
        if(*(chars + i) == ' ') *(chars + i) = '_'; //Changing char ' ' to '_'
        printf("%c", *(chars + i));   
    }

    return 0;
    
}



