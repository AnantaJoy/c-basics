/*
auto storage class is used to define local variables inside a function.
*/
// https://scaler.com/topics/images/Memory-Layout-of-C-program-768x565.webp
#include  <stdio.h>

int main() {
    auto int i = 10;
    printf("i = %d\n", i);
    return 0;
}