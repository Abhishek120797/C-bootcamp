#include<stdio.h>
int main()
{
    int a[10],*ptr,i;
    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    ptr=a;
    for(i=9;i>=0;i--)
        printf("%d ",*(ptr+i));
    return 0;
}
