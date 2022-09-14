#include<stdio.h>
int main()
{
 int num;
 printf("Enter a even number");
 scanf("%d",&num);

switch(num%2)
{
 case 1:
     printf("number entered is an odd number");
     break;
 case 0:
     printf("upper nearest odd number is %d",num+1);
}
    return 0;
}
