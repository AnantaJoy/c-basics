// increment :
// 1. pre increment
// 2. post increment
// decrement :
// 1. pre decrement
// 2. post decrement
#include <stdio.h>

int main(){
    int num=10;
    printf("num++=%d\n",num++);
    printf("++num=%d\n",++num);
    printf("num=%d\n",num);

    int age=20;
    printf("++num=%d\n",++age);
    printf("num++=%d\n",age++);
    printf("num=%d\n",age);
}