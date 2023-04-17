#include <stdio.h>

int Fibonacci();

int main(){
    int i=10;
    int Fn = Fibonacci(i);
    printf("Fibonacci of %dth is %d\n", i, Fn);
    return 0;
}

int Fibonacci(int i){
    if (i==0) return 0;
    else if (i==1)return 1;
    else return Fibonacci(i-1) + Fibonacci(i-2);
}