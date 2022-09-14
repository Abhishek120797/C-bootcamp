#include<stdio.h>
int febonacci(int);
int main()
{
    int num,i;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
    printf("%d ",febonacci(i));
    }
    return 0;
}

//recursive function
int febonacci(int n)
{
    if(n==0||n==1)
        return n;
    return febonacci(n-1)+febonacci(n-2);
}
