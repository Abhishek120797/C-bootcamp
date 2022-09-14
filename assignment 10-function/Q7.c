#include<stdio.h>
int combinaton(int,int);
int factorial(int);
int main()
{
int a,b,c;
printf("Enter value of n : ");
scanf("%d",&a);
printf("Enter value of n : ");
scanf("%d",&b);
c=combinaton(a,b);
printf("number of combinations are %d",c);
}

//function
int combinaton(int n,int r)
{
 return  factorial(n)/(factorial(r)*factorial(n-r));
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
