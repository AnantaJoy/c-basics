// sizeof is a keyword in C, it is used to find the size of a variable.
// int = 4 bytes
// float = 4 bytes
// char = 1 byte
// double = 4 bytes

#include <stdio.h>

int main()
{
    printf("sizeof int = %d\n", sizeof(int));
    printf("sizeof float = %d\n", sizeof(float));
    printf("sizeof char = %d\n", sizeof(char));
    printf("sizeof double = %d\n", sizeof(double));

    return 0;
}