#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i*i;
    }
    printf("The sum of cube of first %d natural number is %d",n,sum);
    return 0;
}
