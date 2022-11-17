/*
Description:
    Print the alphabet.
*/

#include <stdio.h>

int main()
{
    char alpha_ = 'a';

    for(int i = 0; i < 26; i++){
        printf("%c\t", alpha_);
        alpha_++;
    }
    
}