/*
Shift operators
1. Left shift
2. Right shift
*/
#include <stdio.h>

int main(){
    int a=60; // 0011 1100
    int c = 0;
    // left shift
    c=a<<2; // 1111 0000
    printf("a<<2=%d\n",c);

    // right shift
    c=a>>2; // 0000 1111
    printf("a>>2=%d\n",c);

    return 0;
}