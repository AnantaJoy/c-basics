#include <stdio.h>

int swap(int a, int b){
    a  = a + b;
    b = a - b;
    a = a - b;
    printf("After swap, value of a: %d and b: %d\n", a, b);
    return 0;
}

int main(){
    int a = 20;
    int b = 10;
    printf("Before swap, value of a: %d and b: %d\n", a, b);
    swap(a,b);

}