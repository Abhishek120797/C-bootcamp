#include<stdio.h>
int main()
{
intx,i;
printf("enter a number ");
scanf("%d",&x);
i=x&1;
if(i==1)
printf("%d is odd number",x);
else
printf("%d is even number",x);
return 0;
}
