#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main(){
    char unit;
    float temp;
    printf("enter unit:");
    scanf("%c", &unit);
    unit = toupper(unit);
    if (unit='C'){
        printf("enter temp:");
        scanf("%f",&temp);
        temp = (temp + 12) * 2;
        printf("%.1f",temp);
    }
    return 0;
}