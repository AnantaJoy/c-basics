// https://www.educative.io/courses/learn-c-from-scratch/YMYwQrVlG9Y
#include <stdio.h>

int main(int argc, char* argv[]) {
  int i;
  printf("argc = %d\n", argc);
  for (i=0; i<argc; i++) {
    printf("argv[%d] = %s\n", i, argv[i]);
  }
  return 0;
}