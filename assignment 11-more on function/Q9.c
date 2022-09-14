#include<stdio.h>
int square();
int main()
{
    int n,sqr;
    printf("Enter a number : ");
    scanf("%d",&n);
    sqr=square(n);
    printf("Square of %d is %d",n,sqr);
    return 0;
}
//function
int square(int a)
{
    return (a*a);
}
