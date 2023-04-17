// taking input using gets()
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter a value: ");
    gets(str);
    
    printf("You entered: ");
    puts(str);
    return 0;
}