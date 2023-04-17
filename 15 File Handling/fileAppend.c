#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * fpointer = fopen("hello.txt","a");\

    fprintf(fpointer,"Welcome to Bangladesh\n");

    fclose(fpointer);
    return 0;
}