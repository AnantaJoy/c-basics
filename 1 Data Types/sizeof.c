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
    printf("sizeof long = %d\n", sizeof(long));
    printf("sizeof short = %d\n", sizeof(short));
    printf("sizeof long long = %d\n", sizeof(long long));
    printf("sizeof unsigned int = %d\n", sizeof(unsigned int));
    printf("sizeof unsigned char = %d\n", sizeof(unsigned char));
    printf("sizeof unsigned long = %d\n", sizeof(unsigned long));
    printf("sizeof unsigned short = %d\n", sizeof(unsigned short));
    printf("sizeof unsigned long long = %d\n", sizeof(unsigned long long));
    printf("sizeof signed char = %d\n", sizeof(signed char));
    printf("sizeof signed long = %d\n", sizeof(signed long));
    printf("sizeof signed short = %d\n", sizeof(signed short));
    printf("sizeof long double = %d\n", sizeof(long double));

    return 0;
}