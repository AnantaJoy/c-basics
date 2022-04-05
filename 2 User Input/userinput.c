// Taking the input from the user
// scanf() is used to read data from the input.

#include <stdio.h>

int main(){
    int number1;
    int number2;
    int sum;
    printf("Enter a number: ");
    scanf("%d", &number1);
    printf("Enter another number: ");
    scanf("%d", &number2);
    sum = number1 + number2;
    printf("The sum of %d and %d is %d\n", number1, number2, sum);
    return 0;
}