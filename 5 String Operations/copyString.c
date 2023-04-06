#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    printf("Whats your name: ");
    char name[20];
    scanf("%s", name);

    char msg[50];
    strcpy(msg, name);
    puts(msg);
}