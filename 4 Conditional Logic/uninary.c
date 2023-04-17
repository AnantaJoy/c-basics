// unary operator in c

#include <stdio.h>
#include <stdbool.h>

int main(){
    int age = 20;
    bool success = age >= 18? true : false;
    printf("success = %s\n",success?"true":"false");
    return 0;

}