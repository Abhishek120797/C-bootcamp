#include <stdio.h>
int main()
{
    float cost,sell,percent,result;
    printf("Enter cost price=");
    scanf("%f",&cost);
    printf("Enter sell price=");
    scanf("%f",&sell);
    if(cost<=sell)
    {
        result=sell-cost;
        percent=result/cost*100;
        printf("profit percentage is %.2f",percent);
    }
    else
    {
        result=cost-sell;
        percent=result/cost*100;
        printf("loss percentage is %.2f",percent);
    }
    return 0;
}
