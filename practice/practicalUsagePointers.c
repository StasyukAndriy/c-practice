#include <stdio.h>
void randomfunc(int *a){
    *a++;
}
int main (){
    int a = 1;
    int *pA = &a; 
    randomfunc(pA);
    printf("%d", a);
    return 0;
}