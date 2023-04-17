/*
Equal to ""==""
not equal to "!=""
greater than ">"
less than "<"
greater than or equal to ">="
less than or equal to "<="
*/


#include <stdio.h>

int main(){
    
    const int minimumAge = 18;
    int userAge;

    // asked user to enter their age
    printf("Enter your age: ");
    scanf("%d", &userAge);

    // check if user is eligible to vote
    if(userAge >= minimumAge){
        printf("You are eligible to vote.");
    }
    else{ // if user is not eligible to vote
        printf("You are not eligible to vote.");
    }
}