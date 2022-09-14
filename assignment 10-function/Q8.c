#include<stdio.h>
int permutation(int,int);
int factorial(int);
int main()
{
int a,b,c;
printf("Enter value of n : ");
scanf("%d",&a);
printf("Enter value of n : ");
scanf("%d",&b);
c=permutation(a,b);
printf("number of combinations are %d",c);
return 0;
}
//function
int permutation(int n,int r)
{
    return  factorial(n)/factorial(r);
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
