#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...){
    va_list num;

    int i, sum;
    va_start(num, i);
    
    sum = 0;
    for(i=0; i<count; i++){
        sum += va_arg(num, int);
    }
    va_end(num);
    return sum;

}


int main(){
    
    printf("%d\n", sum(6,7,4,8,4,8,3));
    printf("%d\n", sum(9,3,4,5,6,7,8,8,3,3));
    return 0;
}
