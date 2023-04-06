#include <stdio.h>

int main(){
    char letter = 'A';
    printf("Letter: %c \n", letter);

    char letter_to_ascii = 'J';
    printf("ASCII value of %c is: %d \n",letter_to_ascii, letter_to_ascii);

    char name[] = "John";
    printf("Name: %s\n", name);
    return 0;
}