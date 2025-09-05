#include <stdio.h>
int main(){
    printf("Enter Name of Student: ");
    char studentName[100];
    scanf("%s", studentName);
    printf("\nRoll Number: ");
    int rollNumber;
    scanf("%d", &rollNumber);
    printf("\nEnter CGPA/percentage: ");
    float cgpa;
    scanf("%f", &cgpa);
    printf("\n\n");
    printf("Name of the student: %s", studentName);
    printf("\nRoll Number: %d", rollNumber);
    printf("\nPercentage Score Secured:  %.1f %%", cgpa);
}