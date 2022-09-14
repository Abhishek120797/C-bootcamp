#include<stdio.h>
int main()
{
intx,y;
printf("Enter a number\nx=");
scanf("%d",&x);
y=x%10;
printf("x=%d",x-y);
return 0;
}
