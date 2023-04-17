// taking input using gets()
// https://www.scaler.com/topics/c/c-string-input-output-function/
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];

    printf("Enter a value: ");
    fgets(str, 100, stdin);
    
    printf("You entered: ");
    puts(str);
    return 0;
}