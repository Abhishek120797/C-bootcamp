#include<stdio.h>
int main()
{
int x,a1,a2,a3;
printf("Enter three digit number");
scanf("%d",&x);
a1=x%10;
a2=x/10%10;
a3=x/100;
printf("sum of three digit is %d",a1+a2+a3);
return 0;
}
