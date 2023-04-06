#include <stdio.h>

int main(){
    int marks[10] = {78,78,47,46,39,89,87,65,67,89};
    int array_size = sizeof(marks)/sizeof(marks[0]); 

    int sum = 0;
    for(int i=0; i<array_size; i++){
        sum += marks[i];
    }
    float avg_marks = (float)sum/array_size;
    printf("Average marks is %0.2f\n", avg_marks);
}