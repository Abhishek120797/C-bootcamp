#include<stdio.h>
int main()
{
    int num[10],i,even_sum=0,odd_sum=0;
    printf("Enter 10 numbers : ");
    for(i=0;i<=9;i++)
        scanf("%d",&num[i]);
    for(i=0;i<=9;i++)
        if(num[i]%2==0)
            even_sum=even_sum+num[i];
        else
            odd_sum=odd_sum+num[i];
    printf("sum of all even numbers is %d\n",even_sum);
     printf("sum of all odd numbers is %d",odd_sum);
    return 0;
}
