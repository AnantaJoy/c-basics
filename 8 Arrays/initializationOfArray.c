#include <stdio.h>

int main(){
    int ages[10] = {20,31,52,63,74,85,[0]=96,[2]=47};
    int i;
    for(i=0;i<10;i++){
        printf("ages[%d]=%d\n",i,ages[i]);
    }
    return 0;

}