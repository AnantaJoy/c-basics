// malloc 
    #include <stdio.h>

  #include <stdlib.h>

  int main() {
    int n = 10;
    int * p = malloc(n);
    if (p == NULL) {
      printf("Unable to allocate memory :(\n");
      return -1;
    }
    printf("Allocated %d bytes of memory\n", n);
    return 0;
  }
