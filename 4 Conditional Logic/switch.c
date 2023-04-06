#include <stdio.h>

int main(){
    // grading system from marks  using switch
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);   
    switch (marks)
    {
    case (marks <=100 && marks >= 80):
        printf("You got %d marks. You got an A+ \n");
        break;
    }

}