#include <stdio.h>

int main(){
    char name[20];
    printf("What's your name: ");
    scanf("%s", name);
    printf("Hello %s !\n", name);
    return 0;
}