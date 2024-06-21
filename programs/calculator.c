#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main(){
    char operator;
    double num1;
    double num2;
    double result;
    printf("Enter operator:");
    scanf("%c",&operator);
    printf("Enter num1:");
    scanf("%lf",&num1);
    printf("Enter num2:");
    scanf("%lf",&num2);
    switch(operator){
        case '+':
          result = num1 + num2;
          break;
        case '-':
          result = num1 - num2;
          break; 
        case '/':
          result = num1 / num2;
          break; 
        case '*':
          result = num1 * num2;
          break;  
        default:
          printf("bye");
          break;  
              
    }
    printf("%.1lf",result);
}