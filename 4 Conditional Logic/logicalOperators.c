/*
AND operator (&&) - both conditions must be true
OR operator (||) - either condition must be true
NOT operator (!) - reverses the condition
*/

#include <stdio.h>

int main(){
    int inputA, inputB;
    printf("Enter boolean logic input: ");
    scanf("%d %d", &inputA, &inputB);

    // AND operator
    printf("AND operations of %d and %d is : %d\n", inputA, inputB, inputA && inputB);

    // OR operator
    printf("OR operations %d and %d is : %d\n", inputA, inputB, inputA || inputB);

    // NOT operator
    printf("NOT operations of  %d is : %d\n", inputA, !inputA);
    
    return 0;
}