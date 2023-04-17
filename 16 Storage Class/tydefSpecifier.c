/*
Replace struct with typedef
*/
#include <stdio.h>

typedef struct{
    char name[20];
    int age;
} mystruct;

int main() {

  mystruct p1;
    printf("Enter name: ");
    scanf("%s", p1.name);
    printf("Enter age: ");
    scanf("%d", &p1.age);
    printf("Displaying Information:\n");
    printf("Name: %s\t", p1.name);
    printf("Age: %d\n", p1.age);
    mystruct p2 = {"John", 22};
    printf("Name: %s\t", p2.name);
    printf("Age: %d\n", p2.age);
    return 0;
}