#include <stdio.h>
int main(){
    int numstock;
    float price_brought,price_now,profitloss;
    printf("enter how many stocks you bought: ");
    scanf("%d",&numstock);
    printf("\nenter the price of the stock when you bought(in $): ");
    scanf("%f",&price_brought);
    printf("\nenter the price of the stock now(in $): ");
    scanf("%f",&price_now);
    profitloss = ((numstock *price_now) - (numstock*price_brought));
    if(profitloss>0){
        printf("You have made a profit of %.2f", profitloss);

    }
    else if(profitloss<0){
        printf("You have made a loss of %.2f", -profitloss);
    }
    else{
        printf("You have neither made a profit nor a loss.");
    }
    printf("\n\n");
    printf("Thank you for using the stock profit/loss calculator!\n");
    printf("Have a great day!\n");
    return 0;
    
}