#include <stdio.h>
#include <stdlib.h>

int main(){
    int my_number = 10;

    // Declare a pointer to an integer
    int *my_ptr;

    my_ptr = &my_number; // Assign the address of my_number to my_ptr 
    
    // Allocate memory for the pointer
    // my_ptr = (int *) malloc(sizeof(int));
    char *namr = (char *) malloc(8 * sizeof(char));

    // Dereference the pointer to read the value at its address
    printf("Values of my_number: %d\n", *my_ptr);

    int my_copied_number = *my_ptr; // Copy the value at the address of my_ptr to my_copied_number
    printf("Values of my_copied_number: %d\n", my_copied_number);

    *my_ptr = 20;
    printf("Values of 'my_number' after assigning new value: %d\n", *my_ptr);


}