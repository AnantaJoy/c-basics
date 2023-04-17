#include <stdio.h>

int main(){
    int age = 24;
    int *pAge = &age;

    printf("Address of age is %p\n", pAge);
    // dereferencing the pointer
    printf("Value of age is %d\n", *pAge);
    return 0;
}