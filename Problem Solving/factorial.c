// find the factorial of a number

#include <stdio.h>
#include <assert.h>

int ffact(int n);
int factorial(int n);
int main(){

    // Naive approach
    int n, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        fact = fact * i;
    }
    printf("Factorial of %d is %d\n", n, fact);
    printf("Factorial of %d is %d\n", n, ffact(n));
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}

// Iterative approach
int ffact(int n){
    assert(n >= 0);
    int result = 1;
    while(n) {
        result *= n;
        n--;
    }
}

// Recursive approach
int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n - 1);
}