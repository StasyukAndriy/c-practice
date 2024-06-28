#include <stdio.h>
#include <stdlib.h>
int main(){
    int size;
    scanf("enter size%d\n", &size);
    int* pArr = (int*)calloc(size,sizeof(int));
    for(int i = 0; i<size; i++){
        pArr[i] = i+1;
    }
    for(int i = 0; i<size; i++){
        printf("%d", pArr[i]);
    }
    return 0;
}