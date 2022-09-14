#include<stdio.h>
int main()
{
intnum,i,count;
for(num=1;num<=100;num++)
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
    }
    }
return 0;
}
