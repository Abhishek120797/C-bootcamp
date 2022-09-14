#include<stdio.h>
int main()
{
    int num[10],sum=0,i;
    printf("Enter 10 numbers : ");
    for(i=0;i<=9;i++)
        scanf("%d",&num[i]);
    for(i=0;i<=9;i++)
        sum=sum+num[i];
        printf("sum of 10 number is %d",sum);
    return 0;
}
