/*
Bitwise operations
1. Bitwise AND
2. Bitwise OR
3. Bitwise XOR
4. Bitwise NOT
5. Bitwise Left Shift
6. Bitwise Right Shift

*/

#include <stdio.h>

int main(){

    int a=60; // 0011 1100
    int b=13; // 0000 1101
    int c=0;

    // bitwise AND
    c=a&b; // 0000 1100
    printf("a&b=%d\n",c);

    // bitwise OR
    c=a|b; // 0011 1101
    printf("a|b=%d\n",c);

    // bitwise XOR
    c=a^b; // 0011 0001
    printf("a^b=%d\n",c);

    // bitwise NOT
    c=~a; // 1100 0011
    printf("~a=%d",c);

    return 0;
}