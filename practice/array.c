#include <stdio.h>
#include <string.h>
void sortArr(int arr[], int size){
        int temp;
        for(int i = 0; i<size; i++){
            for(int j = 0; j < size-1-i; j++){
                if (arr[j]>arr[j+1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
}
int main(){
    int arr[] = {3,1,8,6,9,2,4};
    int len = sizeof(arr) / sizeof(arr[0]);
    sortArr(arr, len);
    for(int i = 0; i<len; i++){
        printf("%.d ",arr[i]);
    }
    // char strings[][5] = {"hioa","bye","die"};
    // strcpy(strings[0], "nora");
    // // printf(strings[1]);
    // int len = sizeof(strings) / sizeof(strings[0]);
    // for(int i = 0; i < len; i++){
    //     printf("%s\n",strings[i]);
    // }
    return 0;
}