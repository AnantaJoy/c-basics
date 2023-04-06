#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    printf("Address of *p is %p\n", p);
    printf("Value of *p is %d\n", *p);
    printf("Address of a is %p\n", &a);
    printf("Value of a is %d\n", a);
}