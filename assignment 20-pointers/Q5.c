#include<stdio.h>
int main()
{
    int a,b,*max;
    printf("Enter two number : ");
    scanf("%d",&a);
    scanf("%d",&b);
    max=a>b?&a:&b;
    printf("max number is %d",*max);
    return 0;
}
