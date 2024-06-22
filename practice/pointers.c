#include <stdio.h>

int main (){
    int x = 1086;
    int *pX = &x;
    // printf("asas%d", *pX);
    char *p0X = (char*)pX;
    // printf("qwqwqw%d", *(p0X+3));
    int ** doublepX = &pX;
    // printf("%d", **doublepX);
    int arr[5] = {1,2,3,4,5};
    int* pArr = arr;
    printf("%p\n",arr);
    printf("%d",*arr);
    return 0;
}