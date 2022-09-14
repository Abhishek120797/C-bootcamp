#include<stdio.h>
int main()
{
intnum,i,count,Fnum,Lnum;
printf("enter two numbers");
scanf("%d %d",&Fnum,&Lnum);
for(num=Fnum;num<=Lnum;num++)
    {
count=0;
for(i=1;i<=num;i++)
    {
If(num%i==0)
        {
count++;
        }
    }
If(count==2)
    {
printf("%d ",num);
    }
    }
return 0;
}
