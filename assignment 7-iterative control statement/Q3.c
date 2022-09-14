#include<stdio.h>
int main()
{
int n,a1=-1,a2=1,i,tn=0;
printf("Enter a number");
scanf("%d",&n);
for(i=1;1;i++)
    {
       tn=a1+a2;
       a1=a2;
       a2=tn;
       if(n==tn)
        {
        printf("%d is in febonacci series",n);
        break;
        }
       if(tn>n)
       {
        printf("%d is not in febonacci series",n);
        break;
       }
    }
return 0;
}
