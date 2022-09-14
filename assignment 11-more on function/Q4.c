#include<stdio.h>
int PRIME();
int main()
{
    int num,prime;
    printf("Enter a number ");
    scanf("%d",&num);
    prime=PRIME(num);
    printf("next prime number is %d",prime);
return 0;
}
//function
int PRIME(int x)
{
    int i,flag=0;
    for(x=x+1;flag==0;x++)
    {
        i=2;
       while(i<x)
       {
           if(x%i==0)
            break;
           i++;
       }
       if(x==i)
       break;
    }
    return x;
}
