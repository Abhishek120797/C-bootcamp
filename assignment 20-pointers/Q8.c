#include<stdio.h>
int main()
{
    int a[10],i,*ptr,sum=0;
    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    ptr=a;
    for(i=0;i<10;i++)
        sum=sum+*(ptr+i);
    printf("sum of 10 numbers is %d",sum);
return 0;
}
