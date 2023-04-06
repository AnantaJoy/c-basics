#include <stdio.h>

int main(){
    int n;
    
    printf("Enter an integer number: ");
    scanf("%d", &n);

    if (n > 0)
        printf("%d is positive\n", n);
    else if(n<0)
        printf("%d is negative\n",n);
    else
        printf("%d is zero\n", n);    
    return 0;
}