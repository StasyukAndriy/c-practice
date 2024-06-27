#include <stdio.h>

int main (){
    // int x = 1086;
    // int *pX = &x;
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
    int arr[2][3] = {{1,2,3}, {4,5,6}};
    int (*pArr)[3] = arr;
    printf("%d\n", **pArr);
    printf("%d\n", **(pArr+1));
    printf("%d", *(*pArr+1));
    return 0;
}


