#include <stdio.h>
int func (int x, int y){
      return x + y;
}
int main (){
    int x = 5;
    int y = 2;
    int (*pFunc)(int, int);
    pFunc = func;
    printf("%d", pFunc(x,y));
    // int x[] = {1,2,3,4,5};
    // int *pX = x;
    // printf("%d", pX[1]);
    // int y = 5;
    // int* p = &y;
    // printf("%d", p[1]);
    // // printf("asas%d", *pX);
    // char *p0X = (char*)pX;
    // // printf("qwqwqw%d", *(p0X+3));
    // int ** doublepX = &pX;
    // printf("%d", **doublepX);
    // int arr[5] = {1,2,3,4,5};
    // int* pArr = arr;
    // printf("%p\n",arr);
    // printf("%d",arr[3]);
    // printf("%d",*(arr+3));
    int arr[][2][2] = {{{1,2},{3,4}}, {{5,6},{7,8}}};
    int (*pArr)[2][2] = arr;
    // printf("%d\n", **pArr);
    // printf("%d\n", **(pArr+1));
    // printf("%d", *(*pArr+1));
    printf("%d", *(arr[1][1]+1)); // 8
    printf("%d", *(*(*(pArr+1)+1))+1); 
    return 0;
}


