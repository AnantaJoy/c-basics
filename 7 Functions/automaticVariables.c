#include <stdio.h>

void myFunc(){
    int i = 0;
    i++;
    printf("myFunc() has been called %d\n", i);
}


int main(){
    myFunc();
    myFunc();
    myFunc();
}