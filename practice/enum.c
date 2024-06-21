#include <stdio.h>
typedef enum diko{
    sat,
    sun,
    mon
} diko;
int main(){
    diko day = sun;
    printf("%d", day);
    return 0;
}