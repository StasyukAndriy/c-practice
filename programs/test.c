#include <stdio.h>
#include <ctype.h>
#include <string.h>
// my solution
typedef struct  {
        char questions[3][10];
        char correct_answers[3];
        
} QUIZ;

int main (){
    QUIZ TEST = {{"hello?", "bye?", "die?",},{'A', 'B','C'}};
 
    char allAnswers[100][100] = {"A: yes \n B: no \n C: throw\n", "A: yes \n B: no\n C: glow\n", "A: yes \n B: no\n C: flow\n"};
    int questionsLen = sizeof(TEST.questions)/sizeof(TEST.questions[0]);
    char userAnswer;
    int score = 0;
    for(int i = 0; i<questionsLen; i++){
        printf("%s\n", TEST.questions[i]);
        printf("Answers: \n%s", allAnswers[i]);
        printf("Your answer:");
        scanf("%c", &userAnswer);
        while(getchar()!='\n'){}
        if(toupper(userAnswer)==TEST.correct_answers[i]){
            score++;
            printf("you are correct!\n");
        } else{
            printf("you are wrong!\n");
        }
    }
     printf("Your score is %d", score);
    return 0;
}