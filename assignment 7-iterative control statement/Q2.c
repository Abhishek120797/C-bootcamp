#include<stdio.h>
int main()
{
int n,a1=-1,a2=1,i,tn=0;
printf("Enter a number");
scanf("%d",&n);
i=1;
while(i<=n)
    {
tn=a1+a2;
       a1=a2;
       a2=tn;
printf("%d ",tn);
i++;
    }
return 0;
}
