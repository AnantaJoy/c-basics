#include <stdio.h>

void myFunc(){
    static int i = 0;
    i++;
    printf("myFunc() has been called %d times\n", i);
}


int main(){
    myFunc();
    myFunc();
    myFunc();
}