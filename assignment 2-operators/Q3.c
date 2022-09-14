#include<stdio.h>
int main()
{
inta,b,c;
printf("Enter two numbers\na=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
    c=a;
    a=b;
    b=c;
printf("a=%d and b=%d",a,b);
return 0;
}
