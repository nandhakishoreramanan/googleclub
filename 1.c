#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("enter the operatuon you want to perform\n");
    char operatation;
    scanf("%c", &operatation);
    printf("enter the first number\n");
    int firstnum ;
    scanf("%d", &firstnum); // Corrected to use scanf directly
    printf("enter the second number\n");
    int secondnum ;
    scanf("%d", &secondnum);
    if (operatation == '+') {
        printf("the sum is %d\n", firstnum + secondnum);
    } else if (operatation == '-') {
        printf("the difference is %d\n", firstnum - secondnum);
    } else if (operatation == '*') {
        printf("the product is %d\n", firstnum * secondnum);
    } else if (operatation == '/') {
        printf("the quotient is %d\n", firstnum / secondnum);
    } else {
        printf("invalid operation\n");
    }
}



