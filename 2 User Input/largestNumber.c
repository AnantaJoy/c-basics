// Taking 3 input from the user and printing the largest number

#include <stdio.h>

int main(){
    int number1;
    int number2;
    int number3;
    int largest;
    printf("Enter a number: ");
    scanf("%d", &number1);
    printf("Enter another number: ");
    scanf("%d", &number2);
    printf("Enter another number: ");
    scanf("%d", &number3);
    largest = number1;
    if(number2 > largest){
        largest = number2;
    }
    if(number3 > largest){
        largest = number3;
    }
    printf("The largest number is %d\n", largest);
    return 0;
}