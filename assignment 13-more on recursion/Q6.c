#include<stdio.h>
int factorial(int);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("factorial of %d number is %d",num,factorial(num));
    return 0;
}

//recursive function
int factorial(int n)
{
    if(n>1)
    return n*factorial(n-1);
}
