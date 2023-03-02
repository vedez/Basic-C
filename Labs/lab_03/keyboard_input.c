/*
Write separate programs to do the following:
    1. Ask the user to enter 3 numbers and display these on separate lines.
    
    2. Ask the user to enter 2 characters. Display these on the screen. Change your code and 
       see what happens if you use %d as the delimiter for displaying these letters.

        Q: What happens if you press the Space key or hit Enter twice when entering a letter?
        Change your code and use %1s instead of %c in your scanf(). Does this fix the problem? Try.

    3. Ask the user to enter 3 float numbers (numbers with a decimal part). Display the 1st 
       correct to 4 decimal places, the 2nd correct to 3 decimal places, and the 3rd with no decimal places on separate lines.
    
    4. Write separate programs for each of the following from the scanned images below: 
        Q2, Q3, Q4, Q5, Q6, Q8 (be careful with your use of brackets with Q6) – see pdf: lab_03. 
*/

//1. Ask user for input and display in separate lines

#include <stdio.h>

int main(void) {
  /*Setting display messages to a variable.*/
  char Qmessage[] = "Please enter 3 numbers between 1 to 10.";
  char display_message[] = "These are the numbers you have entered: ";

  //Local Variables
  int num_str[3];
  int sam;

  printf("\n\n%s\n", Qmessage);

  //Taking inputs from user into an array
  for (int i = 0; i < 3; i++) {
    scanf("%d", &num_str[i]);
  }while (getchar() != '\n'); //Error "enter" bug fixer.

  printf("\n%s", display_message);

  //Displaying variables in the array
  for (int i = 0; i < 3; i++) {
    printf("\n%d", num_str[i]);
  }
}

