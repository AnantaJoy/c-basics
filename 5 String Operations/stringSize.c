#include <stdio.h>
#include <string.h>

int main(){
    char name[20];
    printf("What's your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Your name is %lu word in length!\n", strlen(name));
    printf("name variable occupied %lu bits of Memory\n", sizeof(name));

    return 0;
}