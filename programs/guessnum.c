#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int number = rand()%100+1;
    int user_number;
    printf("iNSERT NUMBER: ");
    scanf("%d",&user_number);
    fflush(stdin);
    while(number!=user_number){
        if(user_number>number){
            printf("less\n");
        } else{
            printf("more\n");
        }
        printf("iNSERT NUMBER: ");
        scanf("%d",&user_number);
    }
    printf("you won!");
    return 0;
}