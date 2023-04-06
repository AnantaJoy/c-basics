#include <stdio.h>

int main(){
    char name[]={'A','n','a','n','t','a','\0'};
    printf("%s\n",name);

    int arraySize = 7;
    for(int i=0; i<arraySize; i++){
        if(name[i]>=97 && name[i]<=122){
            name[i]= 'A' + (name[i]-'a');
        }
    }
    printf("%s\n",name);

}