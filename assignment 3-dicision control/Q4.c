#include<stdio.h>
int main()
{
int x,result;
printf("Enter a number ");
scanf("%d",&x);
result=x%2;
if (result==0)
printf("number is even");
else
printf("number is odd");
return 0;
}
