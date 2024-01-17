// . Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.

#include <stdio.h>
int main()
{
    float cprice, sprice, profit;
    printf("Enter cost price: ");
    scanf("%f", &cprice);
    printf("Enter sell price: ");
    scanf("%f", &sprice);
    profit = sprice - cprice;
    if (profit > 0)
        printf("profit percentage is %.f%%", profit * 100 / cprice);
    else
        printf("loss percentage is %.f%%", -(profit) / 100 * cprice);
    return 0;
}