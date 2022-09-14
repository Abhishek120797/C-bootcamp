#include<stdio.h>
int factorial(int);
int main()
{
    int sum=0,i;
    for(i=1;i<=5;i++)
    {
    sum=sum+factorial(i)/i;
    }
    printf("sum of series is %d",sum);
    return 0;
}
//function
int factorial(int x)
{
    int fact=1,i;
    for(i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}
