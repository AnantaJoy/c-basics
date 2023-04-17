// lowercase letters to uppercase letters
#include <stdio.h>

int main(){
    char ch;
    printf("Enter a lowercase letter: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z'){
        printf("The uppercase letter is: %c", ch-32);    
    }
    else{
        printf("The character is not a lowercase letter or invalid character.\n");
    }
    return 0;
}