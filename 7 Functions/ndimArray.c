#include <stdio.h>

int main(){
    // 2D array
    printf("A Two dimensional array\n");
    int matrix[2][2] = {2,4,6,6};
    int i, j;
    for(i=0; i< 2; i++){
        for(j=0; j<2; j++) 
        printf("MATRIX[%d,%d] = %d\n",i,j,matrix[i][j]);
    }

    // 3D array
    printf("A Three dimensional array\n");
    int matrix2[2][2][2] = {2,4,6,6,5,7,8,3};
    int k;
    for(i=0; i< 2; i++){
        for(j=0; j<2; j++) {
            for(k=0; k < 2; k++)
                printf("MATRIX[%d,%d,%d] = %d\n",i,j,k,matrix2[i][j][k]);

        }

    }
    return 0;
}