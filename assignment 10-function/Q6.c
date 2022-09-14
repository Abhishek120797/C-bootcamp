#include<stdio.h>
int factorial(int);
int main()
{
    int num,fact;
    printf("enter a number ");
    scanf("%d",&num);
    fact=factorial(num);
    printf("factorial of %d is %d",num,fact);
    return 0;
}
//function
int factorial(int x)
{
    int fac=1,i;
    for(i=x;i>=1;i--)
    {
        fac=fac*i;
    }
    return fac;
}
