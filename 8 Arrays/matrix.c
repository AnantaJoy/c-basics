#include <stdio.h>

int main ()
{
  int grades[][3] = {3,2,8,7,6,8,3,4,8};
  int i,j;
  for (i=0; i<3; i++) {
    for (j=0; j<3; j++) {
      printf("grades[%d][%d]=%d\n", i, j, grades[i][j]);
    }
  }
  return 0;
}