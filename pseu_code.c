#include <stdio.h>
int main(){
    int x, y, p, s, total_sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    p = x * y;
    s = x + y;
    total_sum = s*s + p*(s-x)*(p+y);
        printf("The result is: %d", total_sum);
        return 0;
    }