#include <stdio.h>
#include <string.h>

int main(){
    char password[20];
    int i = 0;
    int cout = 0;
    while (cout < 5)
    {
        printf("Enter password: ");
        scanf("%s", password);
        if (strcmp(password, "1234") == 0){
            printf("Correct password. \n");
            break;
        }
        else if (cout == 4){
            printf("Too many attempts. \n");
            break;
        }
        

        else{ 
             printf("Wrong password. Try again. \n");   
        }
        cout++;
    }
    return 0;
}