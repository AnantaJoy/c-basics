#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * fpointer = fopen("hello.txt","w");
    fprintf(fpointer,"Hello World!\n");
    fclose(fpointer);
    return 0;
}