#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    int length = 0;
    while(str[length] != '\0'){
        length++;
    }
    length--;

    printf("\n");
    for(int i = 0; i < length+2; i++){
        printf("*");
    }
    printf("\n");
    printf("*");
    printf("%s", str);
    for(int i = 0; i < length+2; i++){
        printf("*");
    }
    printf("\n");
    return 0;

}