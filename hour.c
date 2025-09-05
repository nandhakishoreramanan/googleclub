#include <stdio.h>
int main() {
    int hours,minutes,seconds,total;
    printf("Hours: ");
    scanf("%d", &hours);
    printf("\nMinutes: ");
    scanf("%d", &minutes);
    printf("\nSeconds: ");
    scanf("%d", &seconds);
    total = hours*3600 + minutes*60 + seconds;
    printf("Total: %d seconds.", total);
    printf("\n\n");
    

}
    