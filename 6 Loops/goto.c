#include <stdio.h>

int main(){
    int i = 1;
    
    start_here:
        printf("%d\n",i);
        i++;
        if(i<=10){
            goto start_here;
        }
    return 0;
}