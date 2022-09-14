#include<stdio.h>
int main()
{
    int num[10],i;
    float sum=0;
    printf("Enter 10 numbers : ");
    for(i=0;i<=9;i++)
        scanf("%d",&num[i]);
    for(i=0;i<=9;i++)
        sum=sum+num[i];
    printf("average of 10 number is %.2f",sum/10.0);
    return 0;
}
