#include<stdio.h>
int main()
{
int x;
printf("Enter a number");
scanf("%d",&x);
if(x<=999 && x>=100)
printf("%d is three digit number",x);
else
printf("%d is not a three digit number",x);
return 0;
}
