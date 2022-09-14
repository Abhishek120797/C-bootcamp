#include<stdio.h>
int main()
{
intnum, i,x,count;
printf("enter a numbers");
scanf("%d",&x);
for(num=x+1;num!=0;num++)
    {
count=0;
for(i=1;i<=num;i++)
    {
if(num%i==0)
        {
count++;
        }
    }
if(count==2)
    {
printf("%d ",num);
        x=0;
break;
    }
    }
return 0;
}
