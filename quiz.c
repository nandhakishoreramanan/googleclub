#include <stdio.h>
int main(){
    printf("=======Quizzes===============\n");
    printf("Enter the score of the first quiz: ");
    int quiz1;
    scanf("%d", &quiz1);
    printf("\nEnter the score of the second quiz: ");
    int quiz2;
    scanf("%d", &quiz2);
    printf("\nEnter the score of the third quiz: ");
    int quiz3;
    scanf("%d", &quiz3);
    printf("\n=======Mid-term==============");
    printf("\nEnter the score of the mid-term exam: ");
    int midterm;
    scanf("%d", &midterm);
    printf("\n=======Final Exam============");
    printf("\nEnter the score of the final exam: ");
    int final;
    scanf("%d", &final);
    printf("\n");
    printf("\n");
    int quizTotal = quiz1 + quiz2 + quiz3;
    printf("\nQuiz Total: %d", quizTotal);
    printf("\nMid-term: %d", midterm);
    printf("\nFinal : %d", final);
    int totalScore = quizTotal + midterm + final;
    printf("\n……………………");
    printf("\nTotal: %d", totalScore);
    printf("\n\n");
    printf("=======Grade=================");

}