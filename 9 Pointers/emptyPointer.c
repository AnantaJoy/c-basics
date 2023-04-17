#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    printf("%d\n", a);

    // Empty pointer
    int *p;
    printf("%d\n", p);

    // NULL pointer
    int *p1 = NULL;
    printf("%d\n", p1);

    // void pointer
    void *p2;
    printf("%d\n", p2);
    return 0;
        
    //Dangling pointer 
    int *ptr = (int *)malloc(sizeof(int));//memory created for ptr
    free(ptr);// memory released
    // ptr is pointing to a deleted memory location now.
    ptr = NULL; // No more a dangling pointer

}

