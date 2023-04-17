// register storage class 
// https://www.scaler.com/topics/c/storage-classes-in-c/
#include <stdio.h>

int main(){
    register int i = 10;
    printf("i = %d\n", i);
    return 0;
}