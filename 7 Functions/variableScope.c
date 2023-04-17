#include <stdio.h>

void sayHello(char local[20]){
    printf("%s\n", local);
}


char name[20] = "I'm global variable";

int main(){
    // local variable
    char localName[20] = "I'm local variable";
    sayHello(localName);
    printf("%s\n", name);
    return 0;
}