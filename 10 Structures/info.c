#include <stdio.h>

struct info {
    char name[20];
    int age;
    float salary;
    char email[30];
};

int main(){
    
    struct info person;
    
    printf("Enter name: ");
    scanf("%s", person.name);
    printf("Enter age: ");
    scanf("%d", &person.age);
    printf("Enter salary: ");
    scanf("%f", &person.salary);
    printf("Enter email: ");
    scanf("%s", person.email);
    printf("Name: %s", person.email);
    
    printf("\n");

    printf("Name: %s, Age: %d, Salary: %f, Email: %s\n", person.name, person.age, person.salary, person.email);
    return 0;
}
