#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*2-1;
    }
    printf("The sum of first %d odd natural number is %d",n,sum);
    return 0;
}
