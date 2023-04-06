#include <stdio.h>

int main(){
    for (int i = 0; i < 5; i++)
    {   
        if(i == 3)
            break; // break out of the loop
        printf("i = %d \n", i);
    }
    return 0;
}