#include<stdio.h>
int main()
{
intx,result=0;
printf("Enter three digit number");
scanf("%d",&x);
result=x%10*100;
    x=x/10;
printf("after rotation %d",x+result);
return 0;
}
