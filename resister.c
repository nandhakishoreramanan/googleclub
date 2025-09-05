#include <stdio.h>
int main() {
    printf("Enter the name of the student: ");
    char studentName[100];
    scanf("%s", studentName);
    printf("\nRoll Number: ");
    int rollNumber;
    scanf("%d", &rollNumber);
    float age;
    printf("\nAge in years: ");
    scanf("%f", &age);
    int monthage;
    monthage = age * 12;
    int weight;
    printf("\nWeight in gram: ");
    scanf("%d", &weight);
    printf("\nHeight in cm: ");
    int height;
    scanf("%d", &height);
    printf("\nEnter CGPA/PERCENTAGE: ");
    float cgpa;
    scanf("%f", &cgpa);
    printf("\n\n");
    printf("Name of the student: %s", studentName);
    printf("\nRoll Number: %d", rollNumber);
    printf("\nAge in months: %d months", monthage);
    printf("\nWeight in Kilogram: %d", weight / 1000);
    printf("\nHeight in meters: %.2f", height / 100.0);
    printf("\nPercentage Score Scored %.1f", cgpa);


    





}