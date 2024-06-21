#include <stdio.h>
#include <string.h>
typedef struct {
    char name[12];
} bro;
typedef char mychar;

int main (){
    mychar fofo[] = "hellosd"; 
    bro user  = {"hello"};
    bro user1 = {"bobik"};
    bro user2 = {"papa"};
    bro users[] = {user,user1,user2};
    printf("%s",users[1].name);
    printf("%s",fofo);
    // struct Player {
    //     char name[10];
    //     int score;
    // }; 
    // struct Player player1 = {"andiko", 12};
    // printf("%s\n", player1.name);
    // printf("%d", player1.score);

    return 0;
}