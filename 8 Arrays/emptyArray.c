#include <stdio.h>

int main(){
    int grades[5];
    
    int i;
    printf("Before Inserting value to array");
    for(i=0; i<5; i++){
        printf("%d\n", grades[i]);
    }
    // printf("%d\n", grades[100]);
    
    for(i=0; i<5; i++){
        grades[i] = i*i;
    }

    printf("After Inserting value to array");
    for(i=0;i<5;i++){
        printf("%d\n", grades[i]);
    }

    printf("Furthermore modifications of the array\n");
    grades[1] = 100;
    grades[2] = 200;
    grades[3] = 300;
    for(i=0;i<5;i++){
        printf("%d\n", grades[i]);
    }

    return 0;
}