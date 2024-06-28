#include <stdio.h>
 // AS A FUNCTION ARGUMENT TO HAVE A REFERENCE
// void randomfunc(int *a){
//     *a = *a + 1;
// }
// int main (){
//     int a = 1;
//     int *pA = &a; 
//     randomfunc(pA);
//     printf("%d", a);
//     return 0;
// }

// DYNAMIC MEMORY ALLOCATION

// int main(){
//     int size;
//     scanf("enter size%d\n", &size);
//     int* pArr = (int*)calloc(size,sizeof(int));
//     for(int i = 0; i<size; i++){
//         pArr[i] = i+1;
//     }
//     for(int i = 0; i<size; i++){
//         printf("%d", pArr[i]);
//     }
//     return 0;
// }

// ARRAY AS A FUNCTION ARGUMENT IS POINTER
// void print(char str[]){
//      while(*str!='\0'){
//         printf("%c", *str);
//         str++;
//      }
// }
// int randomfunc(int a[], int size){    // int a[] === int* a 
//     int sum = 0;
//     for(int i = 0; i<size; i++){
//         sum+=a[i];  // a[i] === *(a+i)
//     }
//     return sum;
// }
// int main (){
//     int a[] = {1,2,3,4,5}; // int a[] != int* a 
//     int size = sizeof(a)/sizeof(*a);
//     char str[] = "wersa";
//     // randomfunc(a,size);
//     print(str);
    
//     return 0;
// }
