#include <stdio.h>


int isPrime(int num){
    if(num<=1) return num;
    
    int i;
    for ( i = 2; (i*i) <= num; i++)

    {   
        if(num%i == 0) return 0;
    }
    return 1;
}


int main(){
    int number;
    printf("Enter a number to check whether its prime or not\n");
    scanf("%d",&number);

    int chekPrime = isPrime(number);
    printf("%d\n", chekPrime);
}