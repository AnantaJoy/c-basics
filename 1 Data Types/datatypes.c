// Datatypes are used to store data in variables.

#include <stdio.h>

int main(){

    int a = 10;
    float b = 20.5;
    char c = 'A';
    char str[] = "Hello World";
    double d = 3.14;
    printf("%d\n", a);
    printf("%.2f\n", b);
    printf("%c\n", c);
    printf("%s\n", str);
    printf("%.1f\n", d);
    puts(str);
    puts("Hello World");
    return 0;
}