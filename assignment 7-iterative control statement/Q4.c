#include<stdio.h>
int main()
{
int num1,num2,hcf;
printf("Enter two number");
scanf("%d %d",&num1,&num2);
hcf=num1<num2?num1:num2;
for(hcf;hcf>1;hcf--)
    {
if(num1%hcf==0&&num2%hcf==0)
break;
    }
printf("HCF of %d and %d is %d",num1,num2,hcf);
return 0;
}
