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

#include <stdio.h>
#include <string.h>

int main(void) {
  
  /*1. Ask user for input and display in separate lines*/
  
  /*Setting display messages to a variable.*/
  char Qmessage[] = "Please enter 3 numbers between 1 to 10.";
  char display_message[] = "These are the numbers you have entered: ";

  //Local Variables
  int num_arr[3];

  printf("\n\n%s\n", Qmessage);

  //Taking inputs from user into an array
  for (int i = 0; i < 3; i++) {
    scanf("%d", &num_arr[i]);
  }while (getchar() != '\n'); //Error "enter" bug fixer.

  printf("\n%s", display_message);

  //Displaying variables in the array
  for (int i = 0; i < 3; i++) {
    printf("\n%d", num_arr[i]);
  }

  /*2. Ask the user to enter 2 characters. Display these on the screen. Change your code and 
       see what happens if you use %d as the delimiter for displaying these letters.

        Q: What happens if you press the Space key or hit Enter twice when entering a letter?
        Change your code and use %1s instead of %c in your scanf(). Does this fix the problem? Try.*/


  /*Setting display messages to a variable.*/
  char Qmessage2[] = "Enter two characters. *Except for the [ENTER] Key*";
  char display_message2[] = "These are the characters you entered:";

  //local variables
  char charac_arr[2];

  printf("\n\n%s\n", Qmessage2);

  //Taking inputs from user into an array
  for (int i = 0; i < 2; i++) {
    scanf("%c", &charac_arr[i]);
    while (getchar() != '\n'); //Error "enter" bug fixer.
  }

  printf("\n%s", display_message2);

  /*//Displaying variables in the array using the incorrect dilimeter "%d"
  for (int i = 0; i < 2; i++) {
    printf("\n%d", charac_arr[i]);
  }//Result: Prints the ASCII number of the character*/
    
  //Correct dilimeter used "%c" or "%s"
  //Displaying variables in the array
  for (int i = 0; i < 2; i++) {
    printf("\n%c", charac_arr[i]);
  }

  /*3. Ask the user to enter 3 float numbers (numbers with a decimal part). Display the 1st 
       correct to 4 decimal places, the 2nd correct to 3 decimal places, and the 3rd with no decimal places on separate lines.*/

   /*Setting display messages to a variable.*/
  char Qmessage3[] = "Please enter 3 decimal numbers between 1 to 10.";
  char display_message3[] = "These are the numbers you have entered: ";

  //Local Variables
  float float_arr[3];

  printf("\n\n%s\n", Qmessage3);

  //Taking inputs from user into an array
  for (int i = 0; i < 3; i++) {
    scanf("%f", &float_arr[i]);
  }while (getchar() != '\n'); //Error "enter" bug fixer.

  printf("\n%s", display_message3);

  //Displaying variables in the array | Note: Can't be a loop, different decimal postions. 
  printf("\n%.4f", float_arr[0]); // 4 decimal places
  printf("\n%.3f", float_arr[1]); // 3 decimal places
  printf("\n%.0f", float_arr[2]); // No decimal places

  return 0;

}