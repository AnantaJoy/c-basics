// variables is a container for storing data.
// Variables are used to store data in variables.
// there are two types of variables
// 1. Local variables
// 2. Global variables
// Local variables are variables that are declared inside a function.
// Global variables are variables that are declared outside a function.
// There are some rules about naming variables.
// 1. Variables must start with a letter or an underscore.
// 2. Variables must not start with a number.
// 3. Variables can only contain letters, numbers and underscores.
// 4. Variables are case sensitive.
// 5. Variables must be unique.
// 6. Variables must be descriptive.* 
#include <stdio.h>

int main(){
    int number1 = 123;
    int number2 = 456;
    int sum = number1 + number2;
    printf("The sum of %d and %d is %d\n", number1, number2, sum);
    return 0;
   
    // why these below are not working?
    char name[20]= "John Doe";
    printf("My name is %s\n", name);
    float pi  = 3.14159265358979323846264;
    printf("The value of pi is %f\n", pi);
    return 0;

}